#include<stdio.h>
int main()
{
	int a[5][5],i,j,t;
	int count = 0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				if(i==2 && j==2)
				{
				printf("%d\n",count);
				break;
				}
				while(i!=2)
				{
					if(i<2)
					{
						t=a[i][j];
						a[i][j]=a[i+1][j];
						a[i+1][j]=t;
						i++;
						count++;
					}
					else
					{
						t=a[i][j];
						a[i][j]=a[i-1][j];
						a[i-1][j]=t;
						i--;
						count++;
					}	
				}
				while(j!=2)
				{
					if(j<2)
					{
						t=a[i][j];
						a[i][j]=a[i][j+1];
						a[i][j+1]=t;
						j++;
						count++;
					}
					else
					{
						t=a[i][j];
						a[i][j]=a[i][j-1];
						a[i][j-1]=t;
						j--;
						count++;
					}
				}
			}
		}
	}
	printf("%d",count);
	return 0;
}
