#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
 float a,b,c,d,e;
 cout<<"You are using..."<<"\n BH CALCULATION SYSTEM"<<"\n It is trade mark of BH software pvt. ltd."<<"\n BH industries"<<"\n All rights reserved";
 cout<<"\n"<<"\n INSTRUCTIONS:-"<<"\n Before using this please read the following instructions carefully!!";
 cout<<"\n 1) Here you can do one operation at a time."<<"\n 2) The number which you type must be less than 5-digit."<<"\n 3) For next opertation you have to run it again."<<"\n 4) You can add two nubers at a time.";
 cout<<"\n"<<"\n Please choose what you want to do...."<<"\n Press  1  for ADDITION"<<"\t         Press  2  for SUBTRACTION"<<"\n Press  3  for MULTIPLICATION"<<"\t Press  4  for DIVISION"<<"\n Press  5  for POWER"<<"\t         Press  6  for ROOT"<<"\n Press  7  for TRIGNOMETRIC FUNCTION";
 cout<<"\n"<<"\n Please type..:- ";
 cin>>a;
 if(a==1)
   {cout<<"So you want to add two numbers."<<"\n Please add two number which you want to add:-  ";
    cin>>b;
    cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t       +";
    cin>>c;
    d=b+c;
    cout<<"\n So the answer of  "<<b<<"  +  "<<c<<"  is = "<<d;
   }
 if(a==2)
   {cout<<"So you want to subtract two numbers."<<"\n Please type two numbers which you want to subtarct:-  ";
    cin>>b;
    cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t      -";
    cin>>c;
    d=b-c;
    cout<<"\n So the answer of  "<<b<<"  -  "<<c<<"  is = "<<d;
   }
 if(a==3)
   {cout<<"So you want to multiply two numbers."<<"\n Please type two numbers which you want to multiply:-  ";
    cin>>b;
    cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t      x";
    cin>>c;
    d=b*c;
    cout<<"\n So the answer of  "<<b<<"  x  "<<c<<"  is = "<<d;
   }
 if(a==4)
   {cout<<"So you want to divide two numbers."<<"\n Please type two numbers which you want to divide:-  ";
    cin>>b;
    cout<<"\n"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"    divide by ";
    cin>>c;
    d=b/c;
    cout<<"\n So the answer of  "<<b<<"  /  "<<c<<"  is = "<<d;
   }
 if(a==5)
   {cout<<"So you want to find the power of a number."<<"\n Please type the number:-  ";
    cin>>b;
    cout<<"\n Now please add the power value =  ";
    cin>>c;
    d=pow(b,c);
    cout<<"\n So the answer of  "<<b<<"  power  "<<c<<"  is =  "<<d;
   }
 if(a==6)
   {cout<<"So you awnt to find the sqaure root of a number."<<"\n Please type the number:-  ";
    cin>>b;
    cout<<"\n So the amswer of square root of  "<<b<<"  is:- ";
    d=sqrt(b);
    cout<<d;
   }
 if(a==7)
   {cout<<"So you want to find trignometric values of different numbers."<<"\n Please choose the following options...";
    cout<<"\n 1) Press 1 to to get value in sin."<<"\n 2) Press 2 to get value in cos."<<"\n 3) Press 3 to get value in tan.";
    cout<<"\n Please type..:-  ";
    cin>>e;
    if(e==1)
      {cout<<"So you want to find the value in sin."<<"\n Please type the value in 4 digit:-  ";
       cin>> b;
       d= sin(b);
       cout<<"\n So the angle in degrees is:-   "<<d<<".";
      }
    if(e==2)
      {cout<<"So you want to find the value in cos."<<"\n Please type the value in 4 digit:-  ";
       cin>> b;
       d= cos(b);
       cout<<"\n So the angle in degrees is:-   "<<d<<".";
      }
    if(e==3)
      {cout<<"So you want to find the value in tan."<<"\n Please type the value in 4 digit:-  ";
       cin>> b;
       d= tan(b);
       cout<<"\n So the angle in degrees is:-   "<<d<<".";
      }
   }
 getch();
}