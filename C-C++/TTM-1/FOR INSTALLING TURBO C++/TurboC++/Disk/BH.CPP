#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
 int u,t,s,a;
 cout<<"Welcome in BH world"<<"\n"<<"BH world is trade mark of BH industries"<<"\n"<<"no one has right to copy it"<<"\n"<<"all right reserved"<<"\n"<<"BH cooperation limted";
 cout<<"\n "<<"\n"<<"\n"<<"Enter the initial velocity of object:-"<<"\t";
 cin>>u;
 cout<<"\n Good!"<<"\n"<<"Now, please enter the total time taken during whole journey:_"<<"\t"<<"\t"<<"\t";
 cin>>t;
 cout<<"\n Nice job man!!"<<"\n now last but not least, please enter the accelearation of body:-"<<"\t"<<"\t"<<"\t";
 cin>>a;
 cout<<"\n So the distance coversd by object is:-"<<"\t";
 s= (u*t)+(a*t*t)/2;
 cout<<s;
 getch();
}