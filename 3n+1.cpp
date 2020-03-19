#include<iostream>
using namespace std;
int math(int);

int math(int a)
{
	int n;
	while(n!=1)
	{
		n++;
		if (n%2!=0)
		{
			n = 3*n+1;		
		}
		else
			n=n/2;
	}
	return n;	
}

int main()
{
	int i, j, n, m,max=0;
	cout << "\n Enter Start and End of set";
	cin >> i >> j;
	for(n=i;n<=j;n++)
	{
		m = math(n);
		if(m>=max)
			max=m;
	}
	cout << max;
	return 0;
}
