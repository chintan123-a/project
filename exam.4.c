#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int *pa = a, *pb = b, *ps = sum;

    for (int i = 0; i < n; i++)
        *(ps + i) = *(pa + i) + *(pb + i);

    printf("Sum array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);

    printf("\n");
}
/*
input = Enter the size of arrays: 3
        Enter elements of first array:
        3
        3
        3
        Enter elements of second array:
        3
        3
        3
output = Sum array:
         6 6 6
*/
