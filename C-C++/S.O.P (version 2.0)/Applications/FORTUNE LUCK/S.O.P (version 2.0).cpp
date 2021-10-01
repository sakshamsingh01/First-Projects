#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>
#include<cstdlib>
#include<graphics.h>
 
using namespace std; 

int main(void)
{
	char*ch;
	int a;
	int gd=DETECT;
	int gm, x, y, color, angle=0;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
    srand(time(0));
    a=rand()%50+1;
    settextstyle(6,0,5);
	setcolor(GREEN);
	outtextxy(400,30,"TEST YOUR LUCK!");
    getch();
    switch(a)
    {
    	case 1:
    		ch="Someone is speaking well of you.  ";
    		break;
    	case 2:
    		ch="You learn about another person in the process of teaching them something.  ";
    		break;
		case 3:
			ch="Be definite now, worry about precision later.  ";
    		break;
		case 4:
			ch="Your love light shines on another.  ";
    		break;
		case 5:
			ch="Be receptive to new ideas from all fronts.  ";
    		break;
		case 6:
			ch="Demonstrate refinement in everything you do.  ";
    		break;
		case 7:
			ch="Whoever follows a crowd will never be followed by a crowd.  ";
    		break;
		case 8:
			ch="When you feel defensive, examine what you fear.  ";
    		break;
		case 9:
			ch="You will have good luck and overcome many hardships.  ";
    		break;
		case 10:
			ch="Do not be overly judgemental of your loved one's intentions or actions.  ";
    		break;
		case 11:
			ch="Know the opposition, its not always the enemy.  ";
    		break;
		case 12:
			ch="Financial prosperity is coming your way!  ";
    		break;
		case 13:
			ch="Those who bring sunshine to the lives of others cannot keep it from themselves.  ";
    		break;
		case 14:
			ch="Love is a roller coaster, it has its ups and downs.  ";
    		break;
		case 15:
			ch="Your aims are high, and you are capable of much.  ";
    		break;
		case 16:
			ch="A great person was born on your birthday.  ";
    		break;
		case 17:
			ch="Romance follows you if you can only see it.  ";
    		break;
		case 18:
			ch="Be receptive to popular ideas.  ";
    		break;
		case 19:
			ch="Smile. Tomorrow is another day.  ";
    		break;
		case 20:
			ch="Treat everyone as a friend.  ";
    		break;
		case 21:
			ch="Grasp the opportunities that come your way.  ";
    		break;
		case 22:
			ch="The time is right to make new friends.  ";
    		break;
		case 23:
			ch="A package of value will arrive soon.  ";
    		break;
		case 24:
			ch="Now is the time to try something new.  ";
    		break;
		case 25:
			ch="Every solution breeds new problems.  ";
    		break;
		case 26:
			ch="Tell them what you really think. Otherwise, nothing will change.  ";
    		break;
		case 27:
			ch="Keep your eyes open. You never know what you might see.  ";
    		break;
		case 28:
			ch="Being alone and being lonely are two different things.  ";
    		break;
		case 29:
			ch="He is truly wise who gains wisdom from another's mishap.  ";
    		break;
		case 30:
			ch="Follow your heart's strong desire.  ";
    		break;
		case 31:
			ch="Dream your dream and your dream will dream of you.  ";
    		break;
		case 32:
			ch="Follow that restless urge to find yourself.  ";
    		break;
		case 33:
			ch="It takes ten times as many muscles to frown as it does to smile.  ";
    		break;
		case 34:
			ch="Next time you have the opportunity, go on a rollercoaster.  ";
    		break;
		case 35:
			ch="Tomorrow, take a moment to do something just for yourself.  ";
    		break;
		case 36:
			ch="Feeding a cow with roses does not get extra appreciation.  ";
    		break;
   		case 37:
   			ch="By helping someone else today, you may also be helping yourself.  ";
    		break;
		case 38:
			ch="Tell them what you really think. Otherwise, nothing will change.  ";
    		break;
		case 39:
			ch="Change has both physical and psychological attributes.  ";
    		break;
		case 40:
			ch="Relish the transitions in your life - they will happen anyway.  ";
    		break;
		case 41:
		    ch="Enthusiasm can change the current situation.  ";
    		break;	
		case 42:
		    ch="A cheerful letter or message is on its way to you.  ";
    		break;	
		case 43:
			ch="This is the time for caution, but not for fear.  ";
    		break;
		case 44:
			ch="Live each day as if it is your last.  ";
    		break;
		case 45:
			ch="Your good nature will bring you unbounded happiness.  ";
    		break;
		case 46:
			ch="Life is too short to hold grudges.  ";
    		break;
		case 47:
			ch="Expand your horizons.  ";
    		break;
		case 48:
			ch="The time is right to make new friends.  ";
    		break;
		case 49:
			ch="Look to your inner being for guidance.  ";
    		break;
		case 50:
		    ch="Life is to you a dashing and bold adventure.  ";
    		break;
		default:
		    ch="If this comes on your screen then I am really sorry, there is some problem with this application. Please try again.";	
	}
	settextstyle(6,0,3);
	setcolor(CYAN);
	outtextxy(20,300,ch);
	delay(250);
	system("pause");
    return 0;
}
