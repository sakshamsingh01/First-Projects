#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
#include<graphics.h>

using namespace std;

int main()
{
	char*ch;
	int gd=DETECT;
	int gm, x, y, color, angle=0;
	struct arccoordstype a, b;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	settextstyle(6,0,5);
	setcolor(GREEN);
	outtextxy(550,30,"TIME");
	getch();
    while(true)
    {
    	cleardevice();
    	time_t tt;
        struct tm * ti;
        time (&tt);
        ti=localtime(&tt);
        ch=asctime(ti);
        settextstyle(6,0,5);
    	setcolor(CYAN);
	    outtextxy(200,150,ch);
	    settextstyle(6,0,5);
    	setcolor(GREEN);
	    outtextxy(550,30,"TIME");
        delay(100);
	}
    return 0;
}
