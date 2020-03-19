#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,count,max,a[1000];
	cout << "Enter 2 no\n";
	cin >> i >> j ;
	for (m=i;m<=j;m++)
	{
		n = m;
		count = 1;
		while(n!=1)
		{
			if(n%2==0)
			{
				n=n/2;
			}
			else
			{
				n=3*n+1;
			}
			count=count+1;
		}
		a[m]=count;
	}
	max=a[0];
	for(n=i;n<=j;n++)
	{
		if(a[n]>max)
		{
			max=a[n];
		}	
	}
	cout << i <<"\t"<< j <<"\t"<< max <<"\n";
}
