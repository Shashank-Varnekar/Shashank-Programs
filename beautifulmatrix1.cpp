#include<stdio.h>
int main()
{
	int a[5][5],i,j,temp,k;
	int count=0;
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
						for(k=0;k<5;k++)	
						{	
							temp=a[i][k];
							a[i][k]=a[i+1][k];
							a[i+1][k]=temp;
						}
						i++;
					}
					else
					{
						for(k=0;k<5;k++)	
						{	
							temp=a[i][k];
							a[i][k]=a[i-1][k];
							a[i-1][k]=temp;
						}
						i--;
					}	
					count++;
				}
				while(j!=2)
				{
					if(j<2)
					{
						for(k=0;k<5;k++)	
						{	
							temp=a[k][j];
							a[k][j]=a[k][j+1];
							a[k][j+1]=temp;
						}
						j++;
					}
					else
					{
						for(k=0;k<5;k++)	
						{	
							temp=a[k][j];
							a[k][j]=a[k][j-1];
							a[k][j-1]=temp;
						}
						j--;
					}
					count++;
				}
				
			}
		}
	}
	printf("%d",count);
	return 0;
}
