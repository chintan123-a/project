#include <stdio.h>

int main() 
{
    for (int i = 0; i < 5; i++)
	{
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 10 - i; j >= 6; j--)
            printf("%d ", j);
        printf("\n");
    }
}
/*
output = 10 9 8 7 6
            9 8 7 6
              8 7 6
                7 6
                  6
*/
