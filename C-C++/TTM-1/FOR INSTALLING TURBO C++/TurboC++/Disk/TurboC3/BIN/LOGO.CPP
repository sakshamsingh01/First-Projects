#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
void main()
{clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
 int x,y,i;
 x=getmaxx()/1;
 y=getmaxy()/1;
 settextstyle(3,0,10);
 setcolor(WHITE);
 outtextxy(150,120,"T");
 settextstyle(3,0,10);
 setcolor(WHITE);
 outtextxy(220,120,"T");
 settextstyle(3,0,10);
 setcolor(WHITE);
 outtextxy(290,120,"M");
 getch();
}