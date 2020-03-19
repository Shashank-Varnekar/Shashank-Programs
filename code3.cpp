#include<iostream>
using namespace std;

int main()
{
	int i, j, n, m;
	cout << "\n Enter Start and End of set";
	cin >> i >> j;
	while(n!=1)
	{
		for(n=i;n<=j;n++)
		{
			if (n%2==0)
			{
				n = n/2;
			}
			else
			{
				n = 3*n+1;		
			}
		}
		cout << "\t" << n ;
	}
	return 0;
}
