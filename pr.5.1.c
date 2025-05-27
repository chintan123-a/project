#include<stdio.h>

int main()
{
	int n, i; 
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements:\n", n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Negative elements in the array are:\n");
	
	for(i = 0; i < n; i++)
	{
		if(arr[i] < 0)
		{
			printf("%d", arr[i]);
		}
	}
}
/*
input = Enter the number of elements in the array : 8
        4 5 -7 3 -9 2 -8 6
        
output = Negative elements in the array are :-7 , -9 , -8
*/