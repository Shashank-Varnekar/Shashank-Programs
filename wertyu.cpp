#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main () 
{
	char base[48] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	char str[1000];
	int i,j;
	
	while( scanf("%[^\n]s",&str) !='\0') 
	{
		for(j=0;j<strlen(str);j++)
		{
			for (i=0; i<48; i++) 
			{
				if (str[j] == 'Q') 
				{
					printf("Q");
					break;
				}
				else if (str[j] == 'A') 
				{
					printf("A");
					break;
				}
				else if (str[j] == 'Z') 
				{
					printf("Z");
					break;
				}
				else if (str[j] == base[i]) 
				{
					printf("%c",base[i-1]);
					break;
				}
				else if (str[j] == ' ') 
				{
					printf(" ");
					break;
				}
			}
		}
	}
}
