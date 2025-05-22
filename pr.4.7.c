#include<stdio.h>

int main()
{
	int i, j;
	
	for(i = 1; i <= 5; i++)
	{
		if (i == 1 || i == 3)
		{
		    for(j = 1; j <= 5; j++)	
			{ 
			    printf("* ");
			}
			
		}else if (i == 2)
		    {
		        printf("*");
				for(j = 1; j <= 7; j++)
				{
				    printf(" ");	
				}
				printf("*");
		    }
			else
		    {
		    	printf("*");
			}
			printf("\n");
	}
}
/*
output = * * * * *
         *       *
         * * * * *
         * 
         *
*/