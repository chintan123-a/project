#include<stdio.h>

int main()
{
	int i, j, n = 5;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= (n - i); j++)
		{
			printf(" ");
		}
		
		for(j = 1; j <= i; j++)
		{
			printf("%d" , j);
		}
		for(j = 1; j <= (n - i); j++)
		{
			printf(" ");
	    }
	    
		for(j =i; j >= 1; j--)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
}
/*
output = 1                 1
         1 2             2 1
         1 2 3         3 2 1
         1 2 3 4     4 3 2 1
         1 2 3 4 5 5 4 3 2 1
*/