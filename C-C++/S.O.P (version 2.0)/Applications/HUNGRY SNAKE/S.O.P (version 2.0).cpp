#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include <ctime>
#include <process.h>
#include <windows.h>

using namespace std;

class GameConsole
{
private:
    HANDLE console;

public:
    GameConsole()
    {
        console=GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cursor_status;

        GetConsoleCursorInfo(console,&cursor_status);

        cursor_status.bVisible=false;

        SetConsoleCursorInfo(console,&cursor_status);
    }

    void CharOutXY(int x, int y, char c)
    {
        COORD pos; pos.X=x; pos.Y=y;

        SetConsoleCursorPosition(console,pos);

        std::cout << c << std::flush;
    }

    void CharOutXYC(int x, int y, WORD color, char c)
    {
        COORD pos; pos.X=x; pos.Y=y;

        SetConsoleCursorPosition(console,pos);
        SetConsoleTextAttribute(console,color);

        std::cout << c << std::flush;
    }

    void TextOutXY(int x, int y, const std::string & str)
    {
        COORD pos; pos.X=x; pos.Y=y;

        WORD color=FOREGROUND_BLUE|FOREGROUND_GREEN;
        color|=FOREGROUND_RED|FOREGROUND_INTENSITY;

        SetConsoleCursorPosition(console,pos);
        SetConsoleTextAttribute(console,color);

        std::cout << str << std::flush;
    }
};

class GameInput
{
public:
    enum MoveDirection
    {
        MD_NONE,
        MD_UP,
        MD_DOWN,
        MD_RIGHT,
        MD_LEFT
    };

private:
    volatile MoveDirection move_dir;
    volatile bool polling;
    volatile bool stopped_polling;

    static void poll(void * p)
    {
        GameInput * gi = (GameInput*)p;

        while (true)
        {
            if (!gi->polling) break;

            if (GetAsyncKeyState(VK_UP)>>15)
                {gi->move_dir=MD_UP;}

            if (GetAsyncKeyState(VK_DOWN)>>15)
                {gi->move_dir=MD_DOWN;}

            if (GetAsyncKeyState(VK_LEFT)>>15)
                {gi->move_dir=MD_LEFT;}

            if (GetAsyncKeyState(VK_RIGHT)>>15)
                {gi->move_dir=MD_RIGHT;}

            Sleep(25);
        }

        gi->stopped_polling=true;
    }

public:
    GameInput():move_dir(MD_NONE),polling(false){}

    void StartPolling()
    {
        if (polling) return;

        polling=true;
        stopped_polling=false;
        _beginthread(poll,0,this);
    }

    void StopPolling()
    {
        if (!polling) return;

        polling=false;
        while (!stopped_polling) Sleep(100);
    }

    MoveDirection GetInput()
    {
        return move_dir;
    }
};

class GameMap
{
public:
    enum TileType
    {
        TT_EMPTY,
        TT_SNAKE,
        TT_BERRY
    };

private:
    TileType map[80][25];

public:
    GameMap()
    {
        for (int x=0; x<80; x++)
            for (int y=0; y<25; y++)
                map[x][y]=TT_EMPTY;
    }

    TileType & At(int x, int y)
    {
        return map[x][y];
    }
};

class Snake
{
private:
    std::list<COORD> snake_pos;

public:
    Snake(){}

    void init(int x, int y)
    {
        COORD head;
        head.X=x;
        head.Y=y;

        snake_pos.push_front(head);
    }

    COORD GetHead()
    {
        return snake_pos.front();
    }

    COORD GetTail()
    {
        return snake_pos.back();
    }

    void Grow(COORD new_head)
    {
        snake_pos.push_front(new_head);
    }

    void Move(COORD new_head)
    {
        Grow(new_head);
        snake_pos.pop_back();
    }
};

class Game
{
private:
    GameConsole game_console;
    GameInput game_input;
    GameMap game_map;
    Snake snake;

    static const char snake_char='+';
    static const char berry_char='*';

    std::list<COORD> need_redraw;
    GameInput::MoveDirection move_dir;
    COORD new_head;
    COORD old_tail;
    int berry_count;

    void find_good_berry_pos(int & x, int & y)
    {
        while (true)
        {
            x=rand()%80;
            y=rand()%25;

            if (game_map.At(x,y)==GameMap::TT_EMPTY) break;
        }
    }

    void need_redraw_xy(int x, int y)
    {
        COORD pos;
        pos.X=x;
        pos.Y=y;

        need_redraw.push_back(pos);
    }

    void spawn_berries()
    {
        if (berry_count>=3) return;

        int spawn_prob=berry_count+1;
        spawn_prob*=berry_count+1;
        spawn_prob*=2;
        spawn_prob=20-spawn_prob;

        bool spawn=rand()%100+1<=spawn_prob;

        int x, y;

        if (spawn)
        {
            find_good_berry_pos(x,y);

            game_map.At(x,y)=GameMap::TT_BERRY;
            need_redraw_xy(x,y);
            berry_count++;
        }
    }

    void get_input()
    {
        new_head=snake.GetHead();
        move_dir=game_input.GetInput();

        switch(move_dir)
        {
            case GameInput::MD_UP:
                new_head.Y--;

            break;
            case GameInput::MD_DOWN:
                new_head.Y++;

            break;
            case GameInput::MD_RIGHT:
                new_head.X++;

            break;
            case GameInput::MD_LEFT:
                new_head.X--;

            break;
            default:;
        }

        new_head.X+=80;
        new_head.X%=80;
        new_head.Y+=25;
        new_head.Y%=25;
    }

    bool defeat()
    {
        if (game_map.At(new_head.X,new_head.Y)==GameMap::TT_SNAKE) return true;

        return false;
    }

    void move_snake()
    {
        old_tail=snake.GetTail();

        switch(game_map.At(new_head.X,new_head.Y))
        {
            case GameMap::TT_BERRY:
                game_map.At(new_head.X,new_head.Y)=GameMap::TT_SNAKE;
                snake.Grow(new_head);
                need_redraw_xy(new_head.X,new_head.Y);

                berry_count--;

            break;
            default:
                game_map.At(old_tail.X,old_tail.Y)=GameMap::TT_EMPTY;
                need_redraw_xy(old_tail.X,old_tail.Y);
                snake.Move(new_head);
                game_map.At(new_head.X,new_head.Y)=GameMap::TT_SNAKE;
                need_redraw_xy(new_head.X,new_head.Y);
        }
    }

    void draw()
    {
        COORD pos;
        std::list<COORD>::iterator it;
        for (it=need_redraw.begin(); it!=need_redraw.end(); it++)
        {
            pos=*it;

            switch(game_map.At(pos.X,pos.Y))
            {
                case GameMap::TT_EMPTY:
                game_console.CharOutXY(pos.X,pos.Y,' ');

                break;
                case GameMap::TT_SNAKE:
                game_console.CharOutXYC(pos.X,pos.Y,
                    FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY,snake_char);

                break;
                case GameMap::TT_BERRY:
                game_console.CharOutXYC(pos.X,pos.Y,
                    FOREGROUND_RED|FOREGROUND_INTENSITY,berry_char);
            }
        }
    }

    void main_game_loop()
    {
        while (move_dir==GameInput::MD_NONE)
        {
            get_input();

            Sleep(100);
        }

        game_console.TextOutXY(0,0,"                                        ");
        game_console.TextOutXY(0,1,"                                        ");

        while (true)
        {
            if (GetAsyncKeyState(VK_ESCAPE)>>15) break;

            need_redraw.clear();
            spawn_berries();
            get_input();
            if (defeat()) return;
            move_snake();
            draw();

            Sleep(200);
        }
    }

    void init()
    {
        srand(time(0));

        move_dir=GameInput::MD_NONE;
        berry_count=0;

        snake.init(40,12);
        game_console.CharOutXYC(40,12,
            FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY,snake_char);
    }

public:
    Game()
    {
        init();
    }

    void Play()
    {
        game_console.TextOutXY(0,0,"(hit an arrow key to start...)");
        game_console.TextOutXY(0,1,"(hold esc to quit...)");

        game_input.StartPolling();
        main_game_loop();
        game_input.StopPolling();
    }
};

int main(int argc, char * argv[])
{
    Game().Play();

    return 0;
}

