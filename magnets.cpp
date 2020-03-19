#include<stdio.h>
int main()
{
	int i,n;
	int c=0;
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]!=a[i])
		{
			c++;
		}
	}
	printf("%d",c);
}
