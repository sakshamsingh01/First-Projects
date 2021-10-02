#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<windows.h>
#include<string>
#include<list>
#include<ctime>
#include<process.h>
#include<mmsystem.h>

using namespace std;

int main() 
{
	int gd=DETECT;
	int gm, x, y, i, color;
	int rect=240, opt, lp=1;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	settextstyle(6,0,5);
	setcolor(GREEN);
    outtextxy(550,30,"MUSIC");
    settextstyle(6,0,4);
	setcolor(RED);
    outtextxy(100,200,"Song              Artist           Code");
    settextstyle(6,0,3);
	setcolor(CYAN);
    outtextxy(100,270,"Aperture                Unison                1");
    outtextxy(100,310,"Arrow                    Jim Yosef           2");
    outtextxy(100,350,"Cloud                     Tobu                   3");
    outtextxy(100,390,"Firefly                    Jim Yosef           4");
    outtextxy(100,430,"Frag Out                DJ Assasin          5");
    outtextxy(100,470,"Good Times           Tobu                   6");
    outtextxy(100,510,"Last Heroes Lush   Au5                    7");
    outtextxy(100,550,"Lights                    Jim Yosef           8");
    outtextxy(100,590,"Sound of Goodbye Tobu                   9");
    outtextxy(100,630,"Vitality                  Elektronomia      10");
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
    while(lp==1)
                {
                	setcolor(BLACK);
                	rectangle(55,rect+10,700,rect+60);
                	if(GetAsyncKeyState(VK_DOWN)&&rect<600)
                	    rect+=20;
                	if(GetAsyncKeyState(VK_UP)&&rect>240)
                	    rect-=20;
					setcolor(CYAN);
                	rectangle(55,rect+10,700,rect+60);
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
						case 440:opt=6;
						         break;
						case 480:opt=7;
						         break;
						case 520:opt=8;
						         break;
						case 560:opt=9;
						         break;
						case 600:opt=10;
						         break;		 		 		 	 		          
					}	
					getch();
					if(GetAsyncKeyState(VK_RETURN))
					{
					    switch (opt)
                    	{
		                    case 1:
		                        	PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Unison-Aperture-NCS-Release.wav"),NULL,SND_ASYNC);
		                            break;
                       		case 2:
                          		    PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Jim-Yosef-Arrow-NCS-Release.wav"),NULL,SND_ASYNC);
                           			break;
	                     	case 3:
	                           		PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Itro-Tobu-Cloud-9-NCS-Release.wav"),NULL,SND_ASYNC);
	                           		break;
	                    	case 4:
		                           	PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Jim-Yosef-Firefly-NCS-Release.wav"),NULL,SND_ASYNC);
		                           	break;
                       		case 5:
		                        	PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\DJ-ASSASS1N-Frag-Out-NCS-Release.wav"),NULL,SND_ASYNC);
	                           		break;
	                     	case 6:
		                          	PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Tobu-Good-Times-NCS-Release.wav"),NULL,SND_ASYNC);
                          			break;
	                      	case 7:
                        			PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Au5-Last-Heroes-Lush-NCS-Release.wav"),NULL,SND_ASYNC);
	                          		break;
                       		case 8:
                          			PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Jim-Yosef-Lights-NCS-Release.wav"),NULL,SND_ASYNC);
	                          		break;
                      		case 9:
                          	        PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Tobu-Sound-of-Goodbye-NCS-Release.wav"),NULL,SND_ASYNC);
	                            	break;
	                    	case 10:
	                            	PlaySound(TEXT("C:\\S.O.P (version 2.0)\\Addons\\Music\\WAV\\Elektronomia-Vitality-NCS-Release.wav"),NULL,SND_ASYNC);
	                            	break;
                     		default:
		                            cout<<"The code doesn't exist, check the code and try again";	
					    }
			        }				    
				}
    cout<<opt;
	closegraph();
    return 0;
}
