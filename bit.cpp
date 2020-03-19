#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
	int i,j,add,orr,xorr;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			add=i&j;
			orr=i|j;
			xorr=i^j;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			printf("%d\t%d\t%d",add,orr,xorr);
		}
		printf("\n");
	}
}

int main() 
{
    int n, k,i,j,add,orr,xorr;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

