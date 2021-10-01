#include <iostream>

using namespace std;

int main()
{
	char a;
    month:
	cout<<"\nEnter the month (in number)(2018)";
	int month;
	cin>>month;
	if(month>12)
	{
		cout<<"Month cannot go beyond 12";
		goto month;
	}
	cout<<"Monday    Tuesday    Wednesday    Thursday    Friday    Saturday    Sunday\n";
	if(month==1)
		cout<<"   1\t      2\t         3\t    4\t         5\t     6\t      7\n   8\t      9\t         10\t    11\t         12\t     13\t      14\n   15\t      16\t 17\t    18\t         19\t     20\t      21\n   22\t      23\t 24\t    25\t         26\t     27\t      28\n   29\t      30\t 31\t";
	if(month==2)
		cout<<"    \t       \t          \t    1\t         2\t   3\t      4\n   5\t      6\t          7\t    8\t         9\t   10\t      11\n   12\t      13\t  14\t    15\t         16\t   17\t      18\n   19\t      20\t  21\t    22\t         23\t   24\t      25\n   26\t      27\t  28\t";
	if(month==3)
		cout<<"    \t       \t          \t    1\t         2\t     3\t      4\n   5\t      6\t          7\t    8\t         9\t     10\t      11\n   12\t      13\t  14\t    15\t         16\t     17\t      18\n   19\t      20\t  21\t    22\t         23\t     24\t      25\n   26\t      27\t  28\t    29\t         30\t     31\t";
	if(month==4)
		cout<<"   \t      \t         \t    \t         \t     \t      1\n   2\t      3\t           4\t     5\t         6\t     7\t      8\n   9\t      10\t   11\t     12\t         13\t     14\t      15\n   16\t      17\t   18\t     19\t         20\t     21\t      22\n   23\t      24\t   25\t     26\t         27\t     28\t      29\n   30\t";
	if(month==5)
		cout<<"   \t      1\t         2\t    3\t         4\t     5\t      6\n   7\t      8\t         9\t    10\t         11\t     12\t      13\n   14\t      15\t 16\t    17\t         18\t     19\t      20\n   21\t      22\t 23\t    24\t         25\t     26\t      27\n   28\t      29\t 30\t    31\t";
	if(month==6)
		cout<<"   \t      \t         \t    \t         1\t     2\t      3\n   4\t      5\t         6\t    7\t         8\t     9\t      10\n   11\t      12\t 13\t    14\t         15\t     16\t      17\n   18\t      19\t 20\t    21\t         22\t     23\t      24\n   25\t      26\t 27\t    28\t         29\t     30\t";
	if(month==7)
		cout<<"   \t      \t         \t    \t         \t     \t      1\n   2\t      3\t           4\t     5\t         6\t     7\t      8\n   9\t      10\t   11\t     12\t         13\t     14\t      15\n   16\t      17\t   18\t     19\t         20\t     21\t      22\n   23\t      24\t   25\t     26\t         27\t     28\t      29\n   30\t      31\t";
	if(month==8)
		cout<<"   \t      \t         1\t    2\t         3\t     4\t      5\n   6\t      7\t         8\t    9\t         10\t     11\t      12\n   13\t      14\t 15\t    16\t         17\t     18\t      19\n   20\t      21\t 22\t    23\t         24\t     25\t      26\n   27\t      28\t 29\t    30\t";
	if(month==9)
		cout<<"   \t      \t         \t    \t         \t     1\t      2\n   3\t      4\t         5\t    6\t         7\t     8\t      9\n   10\t      11\t 12\t    13\t         14\t     15\t      16\n   17\t      18\t 19\t    20\t         21\t     22\t      23\n   24\t      25\t 26\t    27\t         28\t     29\t      30\t";
	if(month==10)
		cout<<"   1\t      2\t         3\t    4\t         5\t     6\t      7\n   8\t      9\t         10\t    11\t         12\t     13\t      14\n   15\t      16\t 17\t    18\t         19\t     20\t      21\n   22\t      23\t 24\t    25\t         26\t     27\t      28\n   29\t      30\t 31\t";
	if(month==11)
		cout<<"    \t       \t          \t    1\t         2\t     3\t      4\n   5\t      6\t          7\t    8\t         9\t     10\t      11\n   12\t      13\t  14\t    15\t         16\t     17\t      18\n   19\t      20\t  21\t    22\t         23\t     24\t      25\n   26\t      27\t  28\t    29\t         30\t     31\t";	
	if(month==12)
		cout<<"   \t      \t         \t    \t         \t     1\t      2\n   3\t      4\t         5\t    6\t         7\t     8\t      9\n   10\t      11\t 12\t    13\t         14\t     15\t      16\n   17\t      18\t 19\t    20\t         21\t     22\t      23\n   24\t      25\t 26\t    27\t         28\t     29\t      30\t";	
	cout<<"\nDo you want to see another calander?(y/n)";
	cin>>a;
	if(a=='y')
	    goto month;    
    return 0;
}
