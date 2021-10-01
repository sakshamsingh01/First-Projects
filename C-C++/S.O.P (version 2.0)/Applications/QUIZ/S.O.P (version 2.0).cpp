#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<windows.h>
#include <string>
#include <list>
#include <ctime>
#include <process.h>

using namespace std;

int main() 
{
	int gd=DETECT;
	int gm, x, y, i, color;
	int rect=240, opt, lp=1;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	ques1:
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which operator is used to add a multi-line comment?");
    outtextxy(150,400,"A.   //...                              B.   /*...*/");
    outtextxy(150,500,"C.   ||...                               D.   */.../*");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp11:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto ques2;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp12;
    }
    while(true)
    {
    	lp12:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp11;
    }
    ques2:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();	
    settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which operator is used with the standard output function?");
    outtextxy(150,400,"A.   <                                 B.   >>");
    outtextxy(150,500,"C.   <<                               D.   ^^");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp21:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp22;
    }
    while(true)
    {
    	lp22:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto ques3;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp21;
    }
    ques3:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();	
    settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which array can consists of 50 user defined characters?");
    outtextxy(150,400,"A.   char A[51]                  B.   char A{49}");
    outtextxy(150,500,"C.   char A[50]                  D.   string A[50]");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp31:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto ques4;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp32;
    }
    while(true)
    {
    	lp32:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp31;
    }
    ques4:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();	
    settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"An array is stored in a ____ memory location.");
    outtextxy(150,400,"A.   contigious                   B.   distributed");
    outtextxy(150,500,"C.   even                            D.   similar");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp41:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto ques5;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp42;
    }
    while(true)
    {
    	lp42:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp41;
    }
    ques5:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();	
    settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which operator is used to access structure variables?");
    outtextxy(135,400,"A. Left Shift Operator         B.   Turnary Operator");
    outtextxy(135,500,"C. Unary Operator               D.   Dot Operator");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp51:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp52;
    }
    while(true)
    {
    	lp52:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto ques6;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp51;
    }
    ques6:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Data elements of structure are also called ____.");
    outtextxy(150,400,"A.   Objects                        B.   Fillers");
    outtextxy(150,500,"C.   Members                      D.   Arguments");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp61:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp62;
    }
    while(true)
    {
    	lp62:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto ques7;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp61;
    }
    ques7:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Elements of a class are ____ by default.");
    outtextxy(150,400,"A.   public                          B.   private");
    outtextxy(150,500,"C.   similar                         D.   unknown");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp71:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto ques8;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp72;
    }
    while(true)
    {
    	lp72:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp71;
    }
    ques8:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"The 15th element of a matrix A[10][10] is stored in which memory location?");
    outtextxy(150,400,"A.   A[5][1]                        B.   A[1][4]");
    outtextxy(150,500,"C.   A[1][6]                         D.   N.O.T.A");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp81:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto ques9;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp82;
    }
    while(true)
    {
    	lp82:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp81;
    }
    ques9:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which is the mode often used to make projects?");
    outtextxy(110,400,"A. Console Application           B.   Static Library");
    outtextxy(110,500,"C. Windows Application          D.   DLL");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp91:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto ques10;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp92;
    }
    while(true)
    {
    	lp92:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto end;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp91;
    }
    ques10:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(50,250,"Which error is the most difficult to find?");
    outtextxy(150,400,"A.   Logical Error               B.   Compile-Time Error");
    outtextxy(150,500,"C.   Syntax Error                 D.   Run-Time Error");
    setcolor(BLUE);
    rectangle(1200,400,1270,470);
    rectangle(1130,400,1200,470);
    rectangle(1270,400,1340,470);
    rectangle(1200,330,1270,400);
    rectangle(1150,620,1320,690);
    rectangle(1210,540,1320,690);
    setcolor(BLACK);
    line(1211,620,1319,620);
    line(1210,621,1210,689);
    setcolor(BLUE);
    settextstyle(6,0,2);
	outtextxy(1190,650,"Enter");
	line(1260,580,1260,640);
	line(1220,640,1261,640);
	line(1235,350,1235,380);
	line(1235,420,1235,450);
	line(1290,435,1320,435);
	line(1150,435,1180,435);
	line(1220,640,1235,650);
	line(1220,640,1235,630);
	line(1235,350,1245,365);
	line(1235,350,1225,365);
	line(1235,450,1245,435);
	line(1235,450,1225,435);
	line(1150,435,1165,445);
	line(1150,435,1165,425);
	line(1320,435,1305,445);
	line(1320,435,1305,425);
    getch();
    while(true)
	{
		lp101:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,475,450,545);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,375,450,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=0;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            setcolor(BLACK);
      	    rectangle(100,375,450,445);
       	    rectangle(100,475,450,545);
       	    rectangle(480,475,830,545);
       	    setcolor(CYAN);
            rectangle(480,375,830,445);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=1;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
            goto lp102;
    }
    while(true)
    {
    	lp102:
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(480,375,830,445);
        	rectangle(100,375,450,445);
        	rectangle(480,475,830,545);
        	setcolor(CYAN);
            rectangle(100,475,450,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=3;
            	goto end;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
    	    setcolor(BLACK);
        	rectangle(100,375,450,445);
        	rectangle(100,475,450,545);
        	rectangle(480,375,830,445);
        	setcolor(CYAN);
            rectangle(480,475,830,545);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
            	i=4;
            	goto finish;
            }
        } 
        if(GetAsyncKeyState(VK_UP))
            goto lp101;
    }
    finish:
    cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(570,320,"CORRECT");
	delay(1000);
	cleardevice();
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"THE C++ QUIZ");
	settextstyle(6,0,5);
	setcolor(YELLOW);
    outtextxy(400,320,"THAT'S IMPRESSIVE");
	outtextxy(300,400,"KEEP UP THE GOOD WORK");
    getch();
    end:
    cout<<i;	
    closegraph();
    return 0;
}
