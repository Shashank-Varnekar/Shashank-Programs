#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int distance(int,int);
int distance(int r, int s[])
{
	int k, sub=0;
	for(k=0;k<r-1;k++)
	{
		sub = abs(s[k]-s[k+1]);
	}
	return sub;
}

int main()
{
	int tests, rel, s[1000], i, j, ans[20];
	cin >> tests;
	for(i=0;i<tests;i++)
	{
		scanf("%d",&rel);
		for(j=0;j<rel;j++)
		{
			scanf("%d",s[i]);
			ans[i] = distance(rel,s[i]);
		}
	}
	for(i=0;i<tests;i++)
	{
		printf("%d\n",ans[i]);
	}
} 
