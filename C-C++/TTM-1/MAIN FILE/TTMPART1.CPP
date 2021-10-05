#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void spcline(int x)
{int i;
 for(i=0;i<=x;i++)
 cout<<"                                                                                ";
}
void icon(int x)
{ settextstyle(3,0,8);
      setcolor(x);
      outtextxy(150,120,"T");
      settextstyle(3,0,5);
      setcolor(x);
      outtextxy(185,158,"ALK");
      settextstyle(3,0,8);
      setcolor(x);
      outtextxy(280,120,"T");
      settextstyle(3,0,5);
      setcolor(x);
      outtextxy(316,158,"O");
      settextstyle(3,0,8);
      setcolor(x);
      outtextxy(380,120,"M");
      settextstyle(3,0,5);
      setcolor(x);
      outtextxy(425,158,"E");
      settextstyle(2,0,7);
      setcolor(x);
      outtextxy(340,215,"UNTIL END");
      settextstyle(1,0,65);
      setcolor(x);
      outtextxy(480,125,"I");
   }
  void icon3(char *y,int i,int x,int t)
    {settextstyle(3,0,i);
     setcolor(WHITE);
     outtextxy(x,t,y);
    }
void lstscr()
{int i;
  char *a,*a1;
  setbkcolor(0);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  clrscr();
  a="CONNECTION BREAKDOWN\n\nPlease wait while connection is being totaly erased\n";
  for(i=0;a[i]!='\0';i++)
   {delay(60);
    cout<<a[i];
   }
  cout<<"\n\nLOADING APPLICATIONS\n";
  delay(1000);
  for(i=0;i<5;i++)
    {delay(300);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(90);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
    cout<<"\nCLOSING ENGINE 1\n";

  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(5);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nCLOSING ENGINE 2\n";

  for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(5);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 cout<<"\nCLOSING ENGINE 3\n";
 for(i=0;i<5;i++)
    {delay(9);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(15);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(2);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(19);
     cout<<"-";
    }
 cout<<"\nCLOSING ENGINE MANAGER\n";
 for(i=0;i<5;i++)
    {delay(5);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(2);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 cout<<"\nENABLING WINDOWS ATTACHEMENT\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(40);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(30);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(5);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nREMOVING INFORMATION\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nSECURING INTEL\n";
  delay(50);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(80);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(20);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
    cout<<"\nCLOSING SORRROUNDING SIGNALS\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(50);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nERASING NAVIGATED AREA Info.\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(50);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nBREAKING CONNECTION\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nDISTABLISHING CONNECTON\n";
  delay(1000);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(70);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(100);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 icon(8);
 a1="THANK YOU FOR USING US";
 icon3(a1,5,90,240);
 delay(4500);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 icon(8);
 settextstyle(3,0,3);
 setcolor(WHITE);
 outtextxy(120,50,"BY:-");
 settextstyle(3,0,2);
 setcolor(WHITE);
 outtextxy(190,100,"BHworld creations.");
 settextstyle(3,0,3);
 setcolor(WHITE);
 outtextxy(120,180,"PROGRAM WRITTEN BY:-");
 settextstyle(3,0,2);
 setcolor(WHITE);
 outtextxy(190,220,"BIPUL HARSH");
 settextstyle(3,0,3);
 setcolor(WHITE);
 outtextxy(120,280,"SPECIAL THANKS TO:-");
 settextstyle(3,0,2);
 setcolor(WHITE);
 outtextxy(190,320,"SEEMA MAM");
 settextstyle(3,0,2);
 setcolor(WHITE);
 outtextxy(170,350,"AND MY FRIENDS");
 delay(16000);
 exit(0);
}
void delline(char *x,int y)
{for(int i=0;x[i]!='\0';i++)
   {delay(y);
    cout<<x[i];
   }
}

   void icon2(char *x)
   {settextstyle(3,0,8);
      setcolor(WHITE);
      outtextxy(100,100,"SITUATION ");
      settextstyle(3,0,10);
      setcolor(WHITE);
      outtextxy(280,180,x);
    }
void engine1();
void engine2();
void engine3();
void main()
{clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\BGI");
 int x,y,i;
 x=getmaxx()/1;
 y=getmaxy()/1;
 engine1();
 engine2();
 engine3();
 restorecrtmode();
 closegraph();
}
 void engine1()
{ int x,y,i;
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
 delay(800);
 settextstyle(3,0,8);
 setcolor(WHITE);
 outtextxy(150,120,"T");
 settextstyle(3,0,5);
 setcolor(WHITE);
 outtextxy(185,158,"ALK");
 settextstyle(3,0,8);
 setcolor(WHITE);
 outtextxy(280,120,"T");
 settextstyle(3,0,5);
 setcolor(WHITE);
 outtextxy(316,158,"O");
 settextstyle(3,0,8);
 setcolor(WHITE);
 outtextxy(380,120,"M");
 settextstyle(3,0,5);
 setcolor(WHITE);
 outtextxy(425,158,"E");
 delay(2500);
 cout<<"\t\t";
 cout<<"    ";
 for(i=0;i<36;i++)
     cout<<"-";
 settextstyle(2,0,7);
 setcolor(WHITE);
 outtextxy(340,215,"UNTIL END");
 cout<<"\n\n\t\t";
 cout<<"    ";
 for(i=0;i<36;i++)
    cout<<"-";
 settextstyle(1,0,65);
 setcolor(WHITE);
 outtextxy(480,125,"I");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tPART 1.0.0";
 delay(1800);
 for(i=0;i<4;i++)
 {delay(40);
  setbkcolor(WHITE);
  delay(40);
  setbkcolor(BLACK);
 }
 delay(2500);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 settextstyle(2,0,5);
 setcolor(WHITE);
 outtextxy(150,200,"THIS IS MADE FOR THOSE WHO NEED IT");
 settextstyle(2,0,5);
 setcolor(WHITE);
 outtextxy(150,250,"NOT FOR THOSE WHO THINK IT AS FUN");
 delay(3000);
 setbkcolor(BLACK);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 cout<<"LOADING";
 cout<<"\n";
 for(i=0;i<5;i++)
    {delay(800);
     cout<<"-";
     if(i==0)
     {icon(15);
    }
    }
 for(i=0;i<10;i++)
    {delay(500);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(100);
  cout<<"-";
  if(i==62)
    {delay(40);
     setbkcolor(WHITE);
     delay(40);
     setbkcolor(BLACK);
    }
 }
 cleardevice();
}
 void engine2()
{
 clrscr();
 spcline(2);
 int i,x,y;
 char *m1,*fi,fj[10],v[20], c[10],*b1,*b2,*a,*b,s1,*r1,*r2,*r3,*r4,*r5,*b3,*b4,*b5,*b6,*b7,*b8,*b9,*b10,*b11,*b12,*b13,*b14,*b15,*b16,*b17,*b18,*b19,*b20,R1[10],R2[10],R3[10],*Z,*Z2;
 icon(8);
 spcline(1);
 cout<<"PLEASE ENTER THE ACTIVATION CODE :- ";
 gets(v);
 if(v[0]=='S'&&v[1]=='K'&&v[2]=='S'&&v[3]=='1'&&v[4]=='2'&&v[5]=='1'&&v[6]=='2'&&v[7]=='1'&&v[8]=='9'&&v[9]=='6'&&v[10]=='6'&&v[11]=='S'&&v[12]=='0'&&v[13]=='8'&&v[14]=='0'&&v[15]=='8'&&v[16]=='1'&&v[17]=='9'&&v[18]=='6'&&v[19]=='8')
   {spcline(3);
    goto go;
   }
 else{spcline(1);
      cout<<"INCORRECT CODE";
      delay(2400);
      exit(0);
    }
 go:
 clrscr();
 icon(8);
 spcline(4);
 fi="IT'S YOUR FIRST TIME....\n\nTYPE YES OR NO : ";
 delline(fi,80);
 gets(fj);
 if(fj[0]=='N'||fj[0]=='n'&&fj[1]=='O'||fj[1]=='o')
    {cout<<"\n\n\n\n\n\n\n\nTHEN PLEASE TYPE YOUR BEHAVIOUR CODE : ";
     gets(m1);
     if(m1[0]=='a'||m1[0]=='b'||m1[0]=='c'||m1[0]=='d'&&m1[1]=='a'||m1[1]=='b'||m1[1]=='c'||m1[1]=='d'&&m1[2]=='a'||m1[2]=='b'||m1[2]=='c'||m1[2]=='d'&&m1[3]=='T'&&m1[4]=='T'&&m1[5]=='M')
      goto hello;
     else
      {cout<<"\nINAPPROPRIATE FILL";
      delay(1200);
      goto go;
      }
     }
 if(fj[0]=='y'||fj[0]=='Y'&&fj[1]=='E'||fj[1]=='e'||fj[1]=='S'||fj[1]=='s')
   goto open;
 else
 {cout<<"\nINAPPROPRIATE FILL";
  exit(0);
 }
 open:
 clrscr();
 setbkcolor(BLACK);
 cout<<"\n\n\n\n\n";
  a="THIS SOFTWARE HAS REAL PROOF OF HAVING CONECTION WITH REAL SPIRITS MOVING AROUND YOU. FROM THEM YOU CAN ASK ANY QUESTION. \n\n ITS OUR ADVISE THAT WHEN WE MAKE YOUR CONNECTION TO ANY ONE OF THEM YOU PLEASE DON'T TRY TO HURT THEM... \n\n AS OVER 129 DEATHS HAS BEEN RECORDED OF USERS WHO TRY TO DO THIS...\n\n NOW IT'S UPTO YOU HOW YOU TAKE THEM LIGHT OR SERIOUS ";
  delline(a,80);
 b="\n\nIF YOU WANT YOU CAN LEAVE NOW...\n\n DO YOU WANT TO LEAVE?\n\nTYPE YES OR NO:-";
 delline(b,80);
 gets (c);
 if (c[0]=='Y'||c[0]=='y'&&c[1]=='E'||c[1]=='e'&&c[2]=='S'||c[2]=='s')
     exit(0);
 if (c[0]=='N'||c[0]=='n'&&c[1]=='O'||c[1]=='o')
 {clrscr();
   b2="\n\nBEFORE WE CONNECT YOU TO A SPIRIT WE NEED TO KNOW ABOUT YOUR BEHAVIOR...\n\n*PLEASE GIVE ALL THE ANSWERS WHICH WILL BE ASK BELOW.\n\nYOU WILL SEE FOUR OPTIONS FOR THREE DIFFERENT SITUATIONS IN WHICH YOU HAVE TO   CHOOSE ANY ONE.\n\nYOUR EACH RESPONSE SHOWS YOUR THINKING AND BEHAVIOR AS WELL AS YOUR MIND\nDECISIONS.\n\n\n\n\n\n\n\n\tSO SELECT ANY OPTION VERY CAREFULLY... ";
  delline(b2,80);
  delay(2500);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      icon(8);
      r1="I";
      icon2(r1);
      delay(3000);
   clrscr();
   spcline(1);
   b3="YOU ARE SITTING ON A CHAIR AND LISTENING A SONG, IN A ROOM WHERE LIGHTS ARE OFF AND TIME IS SOMETHING 5:37 P.M OF LATE EVENING. YOUR ROOM IS QUIT DARK AND NO   ONE IS THE HOUSE, BESIDE YOU...\n";
   delline(b3,80);
   delay(2800);
   spcline(2);
   b4="SUDDENLY THE MUSIC HAS STOPPED AND YOU LISTEN A VOICE....\nI AM STANDING 20 MILES AWAY FROM YOU\n";
   delline(b4,80);
   delay(1500);
   b5="I AM STANDING 6 MILES AWAY FROM YOU\n";
   delline(b5,80);
   delay(1500);
   b6="I AM STANDING 2 MILES AWAY FROM YOU\n";
   delline(b6,80);
   delay(1500);
   b7="I AM STANDING IN THE FRONT OF YOUR MAIN DOOR\n";
   delline(b7,80);
   delay(1500);
   b8="I AM STANDING IN HALL\n";
   delline(b8,80);
   delay(1500);
   spcline(2);
   b9="I AM STANDING BEHIND YOU....\n\n";
   delline(b9,80);
   delay(1500);
   cout<<"\t\tPLEASE TURN YOUR FACE BACK.";
  delay(3000);
  screen1:
  clrscr();
  spcline(2);
  b10="IN THIS SITUATION WHAT YOU WILL DO\n";
  delline(b10,80);
  delay(2000);
  spcline(3);
  cout<<"(a) I WILL TURN MY FACE.\n(b) I WILL SHOUT\n(c) I WILL NOT TURN\n(d) I WILL THROW THE PHONE BUT NOT TURN AROUND\n";
  spcline(2);
  cout<<"PLEASE TYPE YOUR CHOICE : ";
  gets(R1);
  if (R1[0]!='a'&&R1[0]!='b'&&R1[0]!='c'&&R1[0]!='d'&&R1[0]!='A'&&R1[0]!='B'&&R1[0]!='C'&&R1[0]!='D')
     {spcline(2);
       cout<<"INAPPROPRIATE FILL.";
       delay(1200);
      // goto screen1;
      }
  delay(2000);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      icon(8);
      r2="II";
      icon2(r2);
      delay(3000);
  clrscr();
  spcline(1);
  b11="YOU ARE WALKING ON A PLATFORM IN A RAILWAY STATION AND TIME IS SOME 11:12 PM OF LATE NIGHT.\n";
  delline(b11,80);
  delay(1500);
  spcline(2);
  b12="THERE WAS NO ONE ON THAT PLATFORM BESIDE A TRAIN WHOSE NAME IS NOT DISPLAYING ON THE SCREEN AS WELL AS NO ONE IS ANOUNCING ABOUT IT.\n";
  delline(b12,80);
  delay(1500);
  spcline(2);
  b13="YOU HEARD A NOISE FROM ONE OF THE COACH....\nYOU START GOING TOWARD IT AND WHEN YOU OPEN THE DOOR OF THAT COACH YOU SEE...\n";
  delline(b13,80);
  delay(1500);
  spcline(2);
  b14="A WOMAN IS SITTING ON THE FLOOR AND HER FACE IS COVERED BY HER LONG HAIR.\n\n SHE IS BEHAVING VERY ABNORMAL. AND BESIDE HER THERE IS NO ONE IN THAT COACH....";
  delline(b14,80);
  delay(3000);
  screen2:
  clrscr();
  spcline(2);
  b15="IN THIS SITUATION WHAT YOU WILL DO...\n";
  delline(b15,80);
  spcline(2);
  cout<<"(a) I WILL GO THERE AND TRY TO TALK TO HER\n(b) I WILL SHOUT\n(c) I WILL IGNORE HER\n(d) I WILL LEAVE THAT PLATFORM\n";
  spcline(2);
  cout<<"PLEASE TYPE YOUR CHOICE : ";
  gets(R2);
  if (R2[0]!='a'&&R2[0]!='b'&&R2[0]!='c'&&R2[0]!='d'&&R2[0]!='A'&&R2[0]!='B'&&R2[0]!='C'&&R2[0]!='D')
     {spcline(2);
       cout<<"INAPPROPRIATE FILL.";
       delay(1200);
      // goto screen2;
      }
  delay(2000);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      icon(8);
      r3="III";
      icon2(r3);
      delay(3000);
  clrscr();
  spcline(1);
  b16="YOU ARE WALKING ON A ROAD AND HAVING A LICENSED REVOLVER IN YOUR BAG WHICH YOU  ARE CARRYING...\n";
  delline(b16,80);
  delay(2000);
  spcline(1);
  b17="YOU CAN'T SEE ANY VEHICLE ON THAT ROAD TO A FAR DISTANCE.\nON THAT TIME   SOME DOGS SUDDENLY COME OUT FROM THE BUSHES AND SOURROUND YOU TO SOME DISTANCE...\n";
  delline(b17,80);
  delay(2000);
  spcline(2);
  b18="THEY START ROARING ON YOU,\nAND IN NERVOUSNES YOU TAKE OUT YOUR REVOLVER FROM YOUR BAG AND POINT IT TOWARD  THEM\n";
  delline(b18,80);
  delay(2000);
  spcline(1);
  b19="AND THEY START RUNNING TOWARD YOU....";
  delline(b19,80);
  delay(3000);
  screen3:
  clrscr();
  spcline(2);
  b20="IN THIS SITUATION WHAT YOU WILL DO...\n";
  delline(b20,80);
  spcline(2);
  cout<<"(a) I WILL SHOOT THEM\n(b) I WILL SHOOT IN AIR JUST TO THREAT THEM\n(c) I WILL START RUNNING AWAY FROM THEM\n(d) I WILL SHOOT MYSELF\n";
  spcline(2);
  cout<<"PLEASE TYPE YOUR CHOICE : ";
  gets(R3);
  if (R3[0]!='a'&&R3[0]!='b'&&R3[0]!='c'&&R3[0]!='d'&&R3[0]!='A'&&R3[0]!='B'&&R3[0]!='C'&&R3[0]!='D')
     {spcline(2);
       cout<<"INAPPROPRIATE FILL.";
       delay(1200);
       //goto screen3;
      }
  clrscr();
  icon(8);
  spcline(2);
  Z="THROUGH THE OPTIONS WHICH YOU HAD SELECTED, YOUR BEHAVIOUR AND YOUR NATURE HAS  BEEN RECORDED..\n";
  delline(Z,80);
  delay(1000);
  Z2="WE NOW WILL TRY TO CONNECT YOU TO A SPIRIT AS PER YOUR RECORDED DETAILS.\n";
  delline(Z2,80);
  delay(1000);
   spcline(1);
  cout<<"YOUR BEHAVIOUR CODE IS : "<<R1<<R2<<R3<<"TTM\n\n\n\n\n\n\n\n\n\please note it down it in a copy so as in future you don't need to give that    behaviour test. ";
  delay(4000);
  hello:
  delay(3000);
  clrscr();
  b1="PLEASE WAIT WHILE WE CONNECT YOU TO A SPIRIT...";
  delline(b1,80);
  delay(1200);
  cout<<"\n\nLOADING APPLICATIONS\n";
  delay(1000);
  for(i=0;i<5;i++)
    {delay(300);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(90);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
    cout<<"\nOPENING ENGINE 1\n";

  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(5);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nOPENING ENGINE 2\n";

  for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(5);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 cout<<"\nOPENING ENGINE 3\n";
 for(i=0;i<5;i++)
    {delay(9);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(15);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(2);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(19);
     cout<<"-";
    }
 cout<<"\nOPENING ENGINE MANAGER\n";
 for(i=0;i<5;i++)
    {delay(5);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(10);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(2);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 cout<<"\nDISABLING WINDOWS ATTACHEMENT\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(40);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(30);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(5);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nCOLLECTING INFORMATION\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nSECURING INTEL\n";
  delay(50);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(80);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(20);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
    cout<<"\nCHECKING SORRROUNDING\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(50);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nNAVIGATING AREA\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(50);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nFINDING CONNECTION\n";
  delay(400);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(8);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(10);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
 cout<<"\nESTABLISHING CONNECTON\n";
  delay(1000);
  for(i=0;i<5;i++)
    {delay(100);
     cout<<"-";
       }
 for(i=0;i<5;i++)
    {delay(70);
     cout<<"-";
    }
 for(i=0;i<64;i++)
 {delay(100);
  cout<<"-";
 }
 for(i=0;i<5;i++)
    {cout<<"-";
    }
    }
  delay(2600);
 cleardevice();
}
 void engine3()
{clrscr();
 char *a1,*a2,*s,*d,*d1,*d2,*d3,*d4,*d5,*d6,*d7,*d8,*d9,*d10,*d11,*d12,*d13,*d14,*d15,*d16,*d17,*d18,*d19,*d20,*d21,*d22,*d23,*d24,*d25,*d26,*d27,*d28,*d29,*d30;
 char *xit;
 char s1[100],s2[100],s3[100],s4[100],s5[100],s6[100],s7[100],s8[100],s9[100],s10[100],s11[100];
 char *l1,*l2,*l3,*l4,*l5,*l6,*l7,*l8,*l9,*l10,*l11,*l12,*l13,*l14,*l15,*l16,*l17,*l18,*l19,*l20;
 int a,ab,i,f=0;
 int ext;
 int c,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25,c26,c27,c28,c29,c30;
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 icon(8);
 a1="CONNECTION ESTABLISHED";
 icon3(a1,5,90,150);
 delay(3000);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 a2="DETAILS YOU NEED TO KNOW :-";
 icon3(a2,5,0,400);
 icon(8);
 cout<<"\n\n\n";
 cout<<"FULL NAME              :         SAM TANYSON\n\n";
 cout<<"GENDER                 :         MALE\n\n";
 cout<<"D.O.Birth              :         12 - JULY - 1933\n\n";
 cout<<"D.O.Death              :         27 - NOVEMBER - 1976\n\n";
 cout<<"OCCUPATION             :         WAS A SOILDER\n\n";
 cout<<"DEATH REASON           :         HEART ATTACK\n\n";
 cout<<"CODE TO EXIT           :         BH2020\n\n";
 cout<<"DEFAULT BEHAVIOUR      :         FRIENDLY AND SMART\n\n";
 spcline(3);
 delay(17000);
 for( i=0;i<4;i++)
 {delay(40);
  setbkcolor(WHITE);
  delay(40);
  setbkcolor(BLACK);
 }
  delay(2000);
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 w:
 l1="What do you think, this black background is not looking akward to you?\n\n\t\t";
 delline(l1,60);
 gets(s1);
 for(i=0;s1[i]!='\0';i++)
      {s1[i]=tolower(s1[i]);
       if(s1[i]=='.')
       s1[i]=' ';
      }
      xit="bh2020";
      d="yes";d1="yeah";d2="yup";d3="no";d4="nope";d5="don't think so";d6="yes, of course";d7="really not";
      c=strcmp(s1,d);c1=strcmp(s1,d1);c2=strcmp(s1,d2);c3=strcmp(s1,d3);c4=strcmp(s1,d4);c5=strcmp(s1,d5);c6=strcmp(s1,d6);c7=strcmp(s1,d7);
      ext=strcmp(s1,xit);   //exit path.

      if(ext==0)   //exit loop.
	 {lstscr();
	  f++;
	 }

      if(c==0||c1==0||c2==0||c6==0)
      {l2="\n\nThen what color should be in back ground.\nBut that will be final.\nI will not change it again.\n\n\t\t";
       delline(l2,60);
       f++;
       w1:
       gets(s2);
       for(i=0;s2[i]!='\0';i++)
	  {s2[i]=tolower(s2[i]);
	   if(s2[i]=='.')
	   s2[i]=' ';
	  }
       d8="black";d9="blue";d10="green";d11="cyan";d12="red";d13="magenta";d14="brown";d15="gray";d16="dark gray";d17="light blue";d18="light green";d19="light cyan";d20="light red";d21="light magenta";d22="yellow";d23="white";
       c8=strcmp(s2,d8);c9=strcmp(s2,d9);c10=strcmp(s2,d10);c11=strcmp(s2,d11);c12=strcmp(s2,d12);c13=strcmp(s2,d13);c14=strcmp(s2,d14);c15=strcmp(s2,d15);c16=strcmp(s2,d16);c17=strcmp(s2,d17);c18=strcmp(s2,d18);c19=strcmp(s2,d19);c20=strcmp(s2,d20);c21=strcmp(s2,d21);c22=strcmp(s2,d22);c23=strcmp(s2,d23);ext=strcmp(s2,xit);
	if(ext==0)
	   lstscr();
       if(c8==0||c9==0||c10==0||c11==0||c12==0||c13==0||c14==0||c15==0||c16==0||c17==0||c18==0||c19==0||c20==0||c21==0||c22==0||c23==0)
	 {l3="\n\nOkay just wait a minute...\n\n";
	  delline(l3,60);
	  delay(1500);
	  if(c8==0)
	  setbkcolor(0);
	  if(c9==0)
	  setbkcolor(1);
	  if(c10==0)
	  setbkcolor(2);
	  if(c11==0)
	  setbkcolor(3);
	  if(c12==0)
	  setbkcolor(4);
	  if(c13==0)
	  setbkcolor(5);
	  if(c14==0)
	  setbkcolor(6);
	  if(c15==0)
	  setbkcolor(7);
	  if(c16==0)
	  setbkcolor(8);
	  if(c17==0)
	  setbkcolor(9);
	  if(c18==0)
	  setbkcolor(10);
	  if(c19==0)
	  setbkcolor(11);
	  if(c20==0)
	  setbkcolor(12);
	  if(c21==0)
	  setbkcolor(13);
	  if(c22==0)
	  setbkcolor(14);
	  if(c23==0)
	  setbkcolor(15);
	 }
	else{l4="\n\nThat color is not avilable in this programme.\nJust wait a minute I will show you all the colors available in it.\n\n";
	      delline(l4,60);
	      cout<<d8<<"               "<<d9<<"\n"<<d10<<"               "<<d11<<"\n"<<d12<<"                 "<<d13<<"\n"<<d14<<"               "<<d15<<"\n"<<d16<<"           "<<d17<<"\n"<<d18<<"         "<<d19<<"\n"<<d20<<"           "<<d21<<"\n"<<d22<<"              "<<d23;
	      l5="\n\nNow please type what color you want in back ground..\n\n\t\t";
	      delline(l5,60);
	      goto w1;
	     }
       }
      if(c3==0||c4==0||c5==0||c7==0)
     { l2="\n\nOkay, that's fine.\n\n";
       delline(l2,60);
       f++;
     }
      if(f==0)
     {l2="\n\nSorry, I can't get your words.\nAs I asked you...\n\n";
      delline(l2,60);
      goto w;
     }

     w3:
     l6="\n\nWell, I just forgot to ask you about your name...\nSo if you don't mind...\nCan you please tell me your good name?\n\n\t\t";
     delline(l6,60);
     gets(s3);
     for(i=0;s3[i]!='\0';i++)
      { s3[i]=tolower(s3[i]);
	if(s3[i]=='.')
	 s3[i]=' ';
       }

       ext=strcmp(s3,xit);   //exit path.

      if(ext==0)   //exit loop.
	 lstscr();
 f=0;
 d24="sure";d25="why not";d26="ofcourse";d27="is it important?";d28="if i will not tell you";d29="okay";d3="no";d4="nope";d30="alright";d5="no, i can't tell you";
 c6=strcmp(s3,d24);c7=strcmp(s3,d25);c8=strcmp(s3,d26);c9=strcmp(s3,d29);c10=strcmp(s3,d27);c11=strcmp(s3,d28);c12=strcmp(s3,d3);c13=strcmp(s3,d4);c14=strcmp(s3,d30);c15=strcmp(s3,d5);
 if(c6==0||c7==0||c8==0||c9==0||c14==0)
    {d24="\n\nThen just tell me your name only, not full name.\nBut in single word not in a sentence like...\nMy name is something something\nOr\nI am something something\n\nJust name alright!!\nNow just type it down.\n\n\t\t";
     delline(d24,60);
     f++;
    }
 if(c10==0)
  {l7="\n\nYes ofcourse, as through it I can remember you.\nSo then just tell me your name, not full name.\nBut in single word not in a sentence like...\nMy name is something something\nOr\nI am something something\n\nJust name alright!!\nNow just type it down.\n\n\t\t";
   delline(l7,60);
   f++;
  }
 if(c11==0)
   {l7="\n\nThen...\nJust wait a second....\n\n";
    delline(l7,60);
    delay(1800);
    lstscr();
    f++;
    }
 if(c12==0||c13==0||c15==0)
   {l7="\n\nSee it is important for me to remember you and also for other purpose \nwhich I can't tell you right now.\nSo then just tell me your name only, not full name.\nBut in single word not in a sentence like...\nMy name is something something\nOr\nI am something something\n\nJust name alright!!\nNow just type it down.\n\n\t\t";
    delline(l7,60);
    f++;
   }
 if(f==0)
 {l7="\n\nSorry, I can't get your words.\nAs I asked you...\n\n";
  delline(l7,60);
  goto w3;
 }
 gets(s3);
 for(i=0;s3[i]!='\0';i++)
      { s3[i]=toupper(s3[i]);
	if(s3[i]=='.')
	 s3[i]=' ';
	if(s3[i]==' ')
       {l8="\n\nYou fill your name incorrectly.\nI going to stop it here.";
	delline(l8,60);
	delay(1800);
	lstscr();
	}
       }
  l8="\n\nWell...\n";
  for(i=0;s3[i]!='\0';i++)
     {delay(60);
      cout<<s3[i];
     }
 l9=" is very nice name I really like it.";
 delline(l9,60);
 delay(2500);
 l10="\n\nI am really sorry, as I have to stop it right now due to some urgency.\nI know you are dissapointed by this, but it is urgent.\n\nI am really sorry.";
 delline(l10,50);
 delay(1800);
 lstscr();
 cleardevice();
}
