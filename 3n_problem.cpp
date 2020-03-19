#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, i, j, m, count=1,a[10000];
	cout << "Enter 2 no";
	cin >> i >> j;
	for (n=i; n<=j; n++)
	{
		m = n;
		while(m!=1)
		{
			if (m%2==0)
			{
				m = m/2;
			}
			else
			{
				m = 3*m+1;		
			}
			count=count+1;
			cout << "\t" << m ;
		}
		a[n]=count;
	}
	cout << "\n" << a[n];
}
