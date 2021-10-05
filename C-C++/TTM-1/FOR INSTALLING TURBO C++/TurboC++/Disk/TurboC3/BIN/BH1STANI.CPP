#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void projectwork1();
void closing();

void main()
{int gd=DETECT,gm,x,y;
 initgraph (&gd,&gm,"c:\\turboc3\\bgi");

 projectwork1();
 closing();

 getch();
 closegraph();
 restorecrtmode();
}
 void projectwork1()
 {setbkcolor(YELLOW);
  setcolor(WHITE);
  circle(170,230,8);

  setfillstyle(1,BLUE);
  floodfill(170,230,WHITE);
  setcolor(GREEN);
  outtextxy(150,250,"MY SUCCESS");
  delay(2000);

  settextstyle(7,0,4);
  setcolor(BLUE);
  outtextxy(150,250,"You are waching BH animations");
  delay(1000);

  setcolor(WHITE);
  circle(250,180,8);
  circle(250,280,8);
  floodfill(250,180,WHITE);
  floodfill(250,280,WHITE);
  delay(500);

  circle(330,120,8);
  circle(330,195,8);

  circle(330,265,8);
  circle(330,340,8);

  floodfill(330,120,WHITE);
  floodfill(330,195,WHITE);
  floodfill(330,265,WHITE);
  floodfill(330,340,WHITE);
  delay(500);

  cleardevice();
 }
 void closing()
 {setbkcolor(RED);
  setcolor(YELLOW);
  settextstyle(7,HORIZ_DIR,4);
  outtextxy(160,180,"THANK YOU");
  outtextxy(120,280,"Press any key to EXIT");
 }