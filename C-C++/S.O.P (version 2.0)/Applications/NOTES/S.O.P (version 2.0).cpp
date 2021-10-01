#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<fstream>
#include<graphics.h>

using namespace std;

void brandnew();
void existing();
void readmode();

void savefilename(char svnm[51])
{
	fstream savef;
	savef.open("SNAME01011001.txt",ios::out|ios::app);
	savef<<svnm<<"\n";
	savef.close();
}

void showfilename()
{
	fstream showf;
	char shnm[51];
	showf.open("SNAME01011001.txt",ios::in|ios::app);
	while(!showf.eof())
	{
		showf>>shnm;
		cout<<shnm<<"\n";
	}
	showf.close();
}

int main()
{
	char notes[10000], opt;
	new_existing:
	cout<<"Do you want to create a new file or add to an existing one?(N/E)\nType R open the software in reading mode.\n";
	cin>>opt;
	if(opt=='N'||opt=='n')
	    brandnew();
	else if(opt=='E'||opt=='e')
	    existing();
	else if(opt=='R'||opt=='r')
	    readmode();    
	else
	{
	    cout<<"Use an valid  symbol";	    
	    goto new_existing;   
    }
    cout<<"\n";
    cout<<"Do you want to use this one more time?(Y/N)\n";
    cin>>opt;
    if(opt=='Y'||opt=='y')
	    goto new_existing;
	system("pause");
	return 0;
}

void brandnew()
{
	char nname[51];
	char writen[50001];
	cout<<"Enter the name of the file you want to create (eg. name.txt) NOTE:The file with an existing name will be overwrited:\n";
	cin>>nname;
	fstream nfile;
	nfile.open(nname,ios::out);
	savefilename(nname);
	cout<<"The file has been created, you now can use your file\n\n\n\t\t\t"<<nname<<"\n\n";
	cin.ignore();
	gets(writen);
	nfile<<writen;
	cout<<"\n\n\nYour data has been saved. Thank you";
}

void existing()
{
	char ename[51];
	char writee[50001];
	cout<<"Write the name of the file you want to open:\n";
	showfilename();
	cout<<"\n";
	cin>>ename;
	fstream efile;
	efile.open(ename,ios::out|ios::app);
	cout<<"The file has been created, you now can use your file\n\n\n\t\t\t"<<ename<<"\n\n";
	cin.ignore();
	gets(writee);
	efile<<writee;
	cout<<"\n\n\nYour data has been appended. Thank you";
}

void readmode()
{
	char reade[50001];
	char rname[51];
	cout<<"Write the name of the file you want to open:\n";
	showfilename();
	cout<<"\n";
	cin>>rname;
	fstream rfile;
	rfile.open(rname,ios::in);
	cout<<"\n\n\n\t\t\t"<<rname<<"\n\n";
	while(!rfile.eof())
	{
		rfile.getline(reade,50001);
	    puts(reade);
    }
}
