/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n,i,f=0,s=1,m;
	cin >> n;
	for(i=0;i<n;i++)
	{
		if (i<=1)
			m=i;
		else
		{
			m=f+s;
			f=s
			s=m;
		}
		cout << m;
	}
}
