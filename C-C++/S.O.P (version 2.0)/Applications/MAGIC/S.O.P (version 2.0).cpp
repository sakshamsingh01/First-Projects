#include <iostream>
#include <cstdlib>
#include <graphics.h>

using namespace std;

int main() 
{
	int gd=DETECT;
	int gm, x, y, color;
	struct arccoordstype a, b;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	setcolor(CYAN);
	settextstyle(6,0,5);
	outtextxy(450,50,"CHOOSE A CARD");
	setcolor(YELLOW);
	rectangle(80,150,230,380);
	rectangle(630,150,780,380);
	rectangle(1180,150,1330,380);
	rectangle(80,440,230,670);
	rectangle(630,440,780,670);
	rectangle(1180,440,1330,670);
	setcolor(GREEN);
	settextstyle(6,0,5);
	outtextxy(90,160,"K");
	outtextxy(640,160,"J");
	outtextxy(1190,160,"K");
	outtextxy(90,450,"Q");
	outtextxy(640,450,"Q");
	outtextxy(1190,450,"J");
	settextstyle(6,0,3);
	outtextxy(90,220,"HEARTS");
	outtextxy(640,220,"CLUBS");
	outtextxy(1190,220,"SPADE");
	outtextxy(90,510,"DIAMOND");
	outtextxy(640,510,"CLUBS");
	outtextxy(1190,510,"DIAMOND");
	delay(8000);
	cleardevice();
	setcolor(BLUE);
	settextstyle(6,0,5);
	outtextxy(200,300,"KEEP THINKING ABOUT YOUR CARD");
	delay(8000);
	cleardevice();
	setcolor(CYAN);
	settextstyle(6,0,5);
	outtextxy(250,50,"YOUR CARD HAS BEN REMOVED");
	setcolor(YELLOW);
	rectangle(630,150,780,380);
	rectangle(1180,150,1330,380);
	rectangle(80,440,230,670);
	rectangle(630,440,780,670);
	rectangle(1180,440,1330,670);
	settextstyle(6,0,5);
	setcolor(GREEN);
	outtextxy(640,160,"Q");
	outtextxy(1190,160,"K");
	outtextxy(90,450,"J");
	outtextxy(640,450,"Q");
	outtextxy(1190,450,"K");
	settextstyle(6,0,3);
	outtextxy(640,220,"HEART");
	outtextxy(1190,220,"CLUBS");
	outtextxy(90,510,"HEARTS");
	outtextxy(640,510,"SPADE");
	outtextxy(1190,510,"DIAMOND");
	delay(5000);	
	return 0;
}
