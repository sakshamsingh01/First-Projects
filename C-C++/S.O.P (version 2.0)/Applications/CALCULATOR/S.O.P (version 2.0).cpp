#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<windows.h>
#include<string>
#include<list>
#include<math.h>
#include<ctime>
#include<process.h>

using namespace std;

void operation(int fv)
{
	int a=0,b=0;
	if(fv==1)
	{
	    cout<<"Enter the first number:";
    	cin>>a;
	    cout<<"Enter the second number:";
	    cin>>b;
	    cout<<"\n\n"<<a<<"+"<<b<<"="<<a+b;	
    }
    if(fv==2)
	{
	    cout<<"Enter the first number:";
    	cin>>a;
	    cout<<"Enter the second number:";
	    cin>>b;
	    cout<<"\n\n"<<a<<"-"<<b<<"="<<a-b;	
    }
    if(fv==3)
	{
	    cout<<"Enter the first number:";
    	cin>>a;
	    cout<<"Enter the second number:";
	    cin>>b;
	    cout<<"\n\n"<<a<<"*"<<b<<"="<<a*b;	
    }
    if(fv==4)
	{
	    cout<<"Enter the first number:";
    	cin>>a;
	    cout<<"Enter the second number:";
	    cin>>b;
	    cout<<"\n\n"<<a<<"/"<<b<<"="<<a/b;	
    }if(fv==5)
	{
		b=1;
	    cout<<"Enter the number:";
    	cin>>a;
    	for(int i=a;i!=0;i--)
    	    b=b*i;
	    cout<<"\n\n"<<a<<"!"<<"="<<b;	
    }
    if(fv==6)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nSin("<<a<<")="<<sin(a);	
    }
    if(fv==7)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nCos("<<a<<")="<<cos(a);
    }
    if(fv==8)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nTan("<<a<<")="<<tan(a);	
    }
    if(fv==9)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nCosec("<<a<<")="<<1/(sin(a));
    }
    if(fv==10)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nSec("<<a<<")="<<1/(cos(a));	
    }
    if(fv==11)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nCot("<<a<<")="<<1/(tan(a));	
    }
    if(fv==12)
	{
	    cout<<"Enter the angle:";
    	cin>>a;
	    cout<<"\n\nLog("<<a<<")="<<log(a);
    }
}

int main() 
{
	int gd=DETECT;
	int gm, x, y, color;
	int rect=240, opt, lp=1;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(500,30,"CALCULATOR");
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
    settextstyle(6,0,3);
	setcolor(RED);
    outtextxy(100,200,"ARITHEMATIC");
    outtextxy(550,200,"TRIGONOMETRIC");
    getch();
    while(lp==1)
	{
        if(GetAsyncKeyState(VK_LEFT))
        {
        	setcolor(BLACK);
        	rectangle(530,180,860,240);
        	setfillstyle(1,BLACK);
        	bar(530,240,860,540);
        	setcolor(CYAN);
            rectangle(55,180,395,240);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
                setcolor(BLUE);
                outtextxy(100,260,"ADDITION");
                outtextxy(100,300,"SUBTRACTION");
                outtextxy(100,340,"MULTIPLICATION");
                outtextxy(100,380,"DIVISION");
                outtextxy(100,420,"COMPLIMENT");
                while(lp==1)
                {
                	setcolor(BLACK);
                	rectangle(55,rect+10,395,rect+50);
                	if(GetAsyncKeyState(VK_DOWN)&&rect<400)
                	    rect+=20;
                	if(GetAsyncKeyState(VK_UP)&&rect>240)
                	    rect-=20;
					setcolor(CYAN);
                	rectangle(55,rect+10,395,rect+50);
                	opt=0;
					switch(rect)
					{
						case 240:opt=1;
					             break;
						case 280:opt=2;
						         break;
						case 320:opt=3;
						         break;
						case 360:opt=4;
						         break;
						case 400:opt=5;
						         break;		 		          
					}	
					getch();
					if(GetAsyncKeyState(VK_RETURN))
					{
					    operation(opt);
					    lp=0;
				    }
				}
            }
        }
        else
        if(GetAsyncKeyState(VK_RIGHT))
        {
        	setcolor(BLACK);
        	rectangle(55,180,395,240);
        	setfillstyle(1,BLACK);
        	bar(55,240,400,460);
        	setcolor(CYAN);
            rectangle(530,180,860,240);
            getch();
            if(GetAsyncKeyState(VK_RETURN))
            {
                setcolor(BLUE);
                outtextxy(550,260,"SIN");
                outtextxy(550,300,"COS");
                outtextxy(550,340,"TAN");
                outtextxy(550,380,"COSEC");
                outtextxy(550,420,"SEC");
                outtextxy(550,460,"COT");
                outtextxy(550,500,"LOG");
                while(lp==1)
                {
                	setcolor(BLACK);
                	rectangle(530,rect+10,860,rect+50);
                	if(GetAsyncKeyState(VK_DOWN)&&rect<480)
                	    rect+=20;
                	if(GetAsyncKeyState(VK_UP)&&rect>240)
                	    rect-=20;
					setcolor(CYAN);
                	rectangle(530,rect+10,860,rect+50);	
					opt=0;
					switch(rect)
					{
						case 240:opt=6;
					             break;
						case 280:opt=7;
						         break;
						case 320:opt=8;
						         break;
						case 360:opt=9;
						         break;
						case 400:opt=10;
						         break;
						case 440:opt=11;
						         break;
						case 480:opt=12;
						         break;		 		 		          
					}
					getch();  
					if(GetAsyncKeyState(VK_RETURN))
					{
					    operation(opt); 
					    lp=0;
				    }
				}
            }
        }
    }
    delay(2000);
    closegraph();
    return 0;
}
