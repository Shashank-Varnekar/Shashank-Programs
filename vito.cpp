#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;
int distance(int rel, int s[])
{
	int k, dis=0;
	for(k=0;k<rel;k++)
	{
		dis = abs(dis-s[k]);
	}
	return dis;
}

int main()
{
	int tests, rel, s[1000], i, j, ans[20];
	cin >> tests;
	for(i=0;i<tests;i++)
	{
		cin >> rel;
		for(j=0;j<rel;j++)
		{
			cin >> s[j];
		}
		sort(s, s + rel);
		ans[i] = distance(rel,s);
	}
	for(i=0;i<tests;i++)
		cout << ans[i] <<"\n";
	return 0;
}
