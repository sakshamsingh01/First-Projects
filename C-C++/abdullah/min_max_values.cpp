#include <iostream>
using namespace std;

int i,N;
float ma,mi,val;
int main()
{
	cout << "Enter the number of values : "; cin >> N;
	cout << "Input value -1 : "; cin >> ma;
	mi=ma;

	for (i=2;i<=N;i++)
	{
		cout << "Input value -" << i << " : ";
		cin >> val;
		if (val > ma)
		{
			ma=val;
		}
		if (val < mi)
		{
			mi=val;
		}
	}
	cout << "The maximum of -" << N << " values is : " << ma << "\n";
    cout << "The minimum of -" << N << " values is : " << mi;
}
