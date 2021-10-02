#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main()
{   
	char arr[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ    "};
    int pos1[20];
	int pos2[20];
	int i,no,j,z;
	cout<<"Asume A Word!\n\n\rStep 1:\n\r=======\n\rTabel 1:\n\n\r";
	for(i=0;i<5;i++)
	printf("%d ",i+1);
	for(i=0;i<30;i++)
	{
	    if(i%5==0)
	        printf("\n");
		printf("%c ",arr[i]);
	}
	printf("\n\n\rEnter Total Number of letters in word:");
	scanf("%d",&no);
	printf("                                            ");
	for(i=0;i<no;i++)
	{
		printf("\n\n\rEnter Letter %d Coloumn number:",i+1);
		scanf("%d",&pos1[i]);
		pos1[i]-=1;
	}
	system("cls");
	printf("Step 2:\n\rTabel 2:\n\r");
    for(i=0;i<6;i++)
	printf("%d ",i+1);
	for(i=0;i<no;i++)
	{
		printf("\n");
		for(j=pos1[i];j<30;j+=5)
		printf("%c ",arr[j]);
	}
	for(i=0;i<no;i++)
	{
	    printf("\n\n\rEnter the  %d Letter's Coloumn number:",i+1);
		scanf("%d",&pos2[i]);
		pos2[i]-=1;
	}
	system("cls");
	printf("We Got U! ");
	for(i=0;i<no;i++)
	{
		printf("%c",arr[pos2[i]*5+pos1[i]]);
	}
	while(getch()!=27);
	return 0;
}

