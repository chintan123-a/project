#include<stdio.h>

int main()
{
	int i, j, k, n = 5;
	
	for(i = n; i >= 1; i--)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
		for(j = i; j <= n; j++)
		{
			printf("%d" , j);
		}
		for(j = n- 1; j >= i; j--)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
}
/*
output =       5
             4 5 4
           3 4 5 4 3
		 2 3 4 5 4 3 2
	   1 2 3 4 5 4 3 2 1     
*/