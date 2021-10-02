#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<cstdlib>
#include<mmsystem.h>

using namespace std;

int main()
{
    char pass[15];
	int i,j;
	int gd=DETECT;
	int gm, x, y, color, angle=0;
	struct arccoordstype a, b;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	PlaySound("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\1 (Entry).wav", NULL, SND_FILENAME|SND_ASYNC);
	setcolor(MAGENTA);
	line(20,20,1346,20);
	line(1346,20,1346,680);
	line(1346,680,20,680);
	line(20,680,20,20);
	line(40,40,100,40);
	line(40,40,40,100);
	line(1326,40,1266,40);
	line(1326,40,1326,100);
	line(1326,660,1266,660);
	line(1326,660,1326,600);
	line(40,660,100,660);
	line(40,660,40,600);
	setcolor(CYAN);
	settextstyle(6,0,1);
	outtextxy(960,685,"Copyright(c) 2018, Sanket Mathur");
	setcolor(YELLOW);
	settextstyle(6,0,50);
	delay(2000);
	outtextxy(450,250,"S.O.P");
	line(450,370,550,370);
	line(620,370,720,370);
	line(790,370,890,370);
	line(580,380,600,380);
	line(740,380,760,380);
	settextstyle(6,0,4);
	delay(2000);
	outtextxy(700,385,"VERSION 2.0");
	line(700,420,980,420);
	setcolor(CYAN);
	delay(2000);
	settextstyle(6,0,5);
	outtextxy(500,300,"PASSWORD");
	delay(100);
	std::cout<<"Password:";
	gets(pass);
	if(pass[0]=='S'&&pass[1]=='7'&&pass[2]=='b'&&pass[3]=='t'&&pass[4]=='S'&&pass[5]=='2'&&pass[6]=='w'&&pass[7]=='G'&&pass[8]=='E'&&pass[9]=='l')
	    std::cout<<"Password is correct";
	else
	{
		cout<<"Incorrect Password"<<"\n"<<"Check the password and try again";
		exit(0);
    }
	cleardevice();
	PlaySound("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\2 (Entry).wav", NULL, SND_FILENAME|SND_ASYNC);
	setcolor(CYAN);
	settextstyle(6,0,1);
	outtextxy(960,685,"Copyright(c) 2018, Sanket Mathur");
	setcolor(MAGENTA);
	line(20,20,1346,20);
	line(1346,20,1346,680);
	line(1346,680,20,680);
	line(20,680,20,20);
	line(40,40,100,40);
	line(40,40,40,100);
	line(1326,40,1266,40);
	line(1326,40,1326,100);
	line(1326,660,1266,660);
	line(1326,660,1326,600);
	line(40,660,100,660);
	line(40,660,40,600);
	setcolor(MAGENTA);
	line(245,25,245,675);
	setcolor(BLUE);
	line(320,25,320,675);
	setcolor(RED);
	line(395,25,395,675);
	setcolor(LIGHTBLUE);
	line(470,25,470,675);
	setcolor(LIGHTRED);
	line(545,25,545,675);
	setcolor(LIGHTCYAN);
	line(620,25,620,675);
	setcolor(LIGHTMAGENTA);
	line(695,25,695,675);
	setcolor(MAGENTA);
	line(770,25,770,675);
	setcolor(BLUE);
	line(845,25,845,675);
	setcolor(RED);
	line(920,25,920,675);
	setcolor(LIGHTBLUE);
	line(995,25,995,675);
	setcolor(LIGHTRED);
	line(1070,25,1070,675);
	setcolor(LIGHTCYAN);
	line(1145,25,1145,675);
	setcolor(LIGHTMAGENTA);
	line(1220,25,1220,675);
	delay(3000);
	for(i=0;i<=70;i++)
	{
		setcolor(MAGENTA);
	    line(245-i,25,245-i,675);
	    setcolor(BLUE);
    	line(320-i,25,320-i,675);
    	setcolor(RED);
	    line(395-i,25,395-i,675);
	    setcolor(LIGHTBLUE);
    	line(470-i,25,470-i,675);
    	setcolor(LIGHTRED);
	    line(545-i,25,545-i,675);
	    setcolor(LIGHTCYAN);
    	line(620-i,25,620-i,675);
    	setcolor(LIGHTMAGENTA);
	    line(695-i,25,695-i,675);
	    setcolor(MAGENTA);
	    line(770-i,25,770-i,675);
	    setcolor(BLUE);
    	line(845-i,25,845-i,675);
    	setcolor(RED);
	    line(920-i,25,920-i,675);
	    setcolor(LIGHTBLUE);
    	line(995-i,25,995-i,675);
    	setcolor(LIGHTRED);
	    line(1070-i,25,1070-i,675);
	    setcolor(LIGHTCYAN);
    	line(1145-i,25,1145-i,675);
    	setcolor(LIGHTMAGENTA);
	    line(1220-i,25,1220-i,675);
		delay(8);	
	}
	delay(2000);
	for(i=0;i<=400;i++)
	{
		setcolor(YELLOW);
		line(486,384,486+i,384);
		line(886,384,886-(i/2),384-(i/2));
		line(686,184,686-(i/2),184+(i/2));
		delay(7);
    }
    for(i=0;i<=20;i++)
    {
    	setcolor(YELLOW);
    	line(486,384+i,886,384+i);
		line(886+i,384,686,184-i);
		line(686,184-i,486-i,384);
		rectangle(886,384,886+i,384+i);
		rectangle(486,384,486-i,384+i);
		delay(20);
	}
	delay(2000);
	setcolor(WHITE);
	line(486,384,886,384);
	line(886,384,686,184);
	line(686,184,486,384);
	setfillstyle(SOLID_FILL,BLACK);
    floodfill(690,194,WHITE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,7);
	outtextxy(576,300,"S.O.P");
	settextstyle(6,0,4);
	outtextxy(420,400,"Sanket's Operating Platform");
	settextstyle(6,0,1);
	outtextxy(732,363,"Version 2.0");
	setcolor(CYAN);
	settextstyle(6,0,1);
	outtextxy(960,685,"Copyright(c) 2018, Sanket Mathur");
	delay(5000);
	cleardevice();
	PlaySound("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\2 (Entry).wav", NULL, SND_FILENAME|SND_ASYNC);
	setcolor(MAGENTA);
	line(20,20,1346,20);
	line(1346,20,1346,680);
	line(1346,680,20,680);
	line(20,680,20,20);
	line(40,40,100,40);
	line(40,40,40,100);
	line(1326,40,1266,40);
	line(1326,40,1326,100);
	line(1326,660,1266,660);
	line(1326,660,1326,600);
	line(40,660,100,660);
	line(40,660,40,600);
	setcolor(CYAN);
	settextstyle(6,0,1);
	outtextxy(960,685,"Copyright(c) 2018, Sanket Mathur");	
	setcolor(CYAN);
	settextstyle(6,0,5);
	outtextxy(520,320,"WELCOME");
	while(angle<=150)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,200);
		setcolor(RED);
		getarccoords(&a);
		circle(a.xstart,a.ystart,25);
		angle=angle+5;
		delay(35);
	}
	angle=0;
	while(angle<=290)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,200);
		setcolor(RED);
		getarccoords(&a);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,250);
		getarccoords(&a);
		setcolor(GREEN);
		circle(a.xstart,a.ystart,25);
		angle=angle+5;
		delay(35);
	}
	angle=0;
		while(angle<=360)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,200);
		setcolor(RED);
		getarccoords(&a);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,250);
		getarccoords(&a);
		setcolor(GREEN);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,300);
		getarccoords(&a);
		setcolor(BLUE);
		circle(a.xstart,a.ystart,25);
		angle=angle+5;
		delay(35);
	}
	delay(500);
    cleardevice();
    STARTUPINFO startInfo = {0};
    PROCESS_INFORMATION processInfo = {0};
    BOOL bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\HomePage\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
    angle=0;
    setcolor(MAGENTA);
    line(20,20,1346,20);
	line(1346,20,1346,680);
	line(1346,680,20,680);
	line(20,680,20,20);
	line(40,40,100,40);
	line(40,40,40,100);
	line(1326,40,1266,40);
	line(1326,40,1326,100);
	line(1326,660,1266,660);
	line(1326,660,1326,600);
	line(40,660,100,660);
	line(40,660,40,600);
	setcolor(CYAN);
	settextstyle(6,0,1);
	outtextxy(960,685,"Copyright(c) 2018, Sanket Mathur");
    system("pause");
    PlaySound("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\1 (Exit).wav", NULL, SND_FILENAME|SND_ASYNC);
    setcolor(CYAN);
    settextstyle(6,0,5);
	outtextxy(540,320,"CLOSING");
	settextstyle(6,0,2);
	outtextxy(700,520,"Developed By:");
	outtextxy(700,550,"Class:");
	outtextxy(700,580,"Roll no.:");
	outtextxy(700,610,"Guided By:");
	outtextxy(700,640,"School:");
	settextstyle(6,0,2);
	outtextxy(900,520,"SANKET MATHUR");
	outtextxy(900,550,"XII-A");
	outtextxy(900,580,"32");
	outtextxy(900,610,"MRS. SEEMA RATHORE");
	outtextxy(900,640,"K.V. SECTOR-47, CHANDIGARH");
	while(angle<=360)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,200);
		setcolor(RED);
		getarccoords(&a);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,250);
		getarccoords(&a);
		setcolor(GREEN);
		circle(a.xstart,a.ystart,25);
		setcolor(GREEN);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,300);
		getarccoords(&a);
		setcolor(BLUE);
		circle(a.xstart,a.ystart,25);
		angle=angle+5;
	}
	while(angle>=0)
	{
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,200);
		setcolor(BLACK);
		getarccoords(&a);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,250);
		getarccoords(&a);
		setcolor(BLACK);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		circle(a.xstart,a.ystart,25);
		setcolor(BLACK);
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,300);
		getarccoords(&a);
		setcolor(BLACK);
		circle(a.xstart,a.ystart,25);
		angle=angle-5;
		delay(50);
	}
	delay(2000);
	closegraph();
	getch();
	return 0;
}
