#include<stdio.h>
#include<string.h>

int main()
{
	char arr[5];
	char data[10];
	
	printf("enter any string: ");
	gets(arr);
	
	strcpy(data , strrev(arr));
	
	int value = strcmp(data , arr);
	
	if (value == 0)
	{
		printf("given string is palindrome.");
	}
	else if(value == 0)
	{
		printf("given string is not palindrome.");
	}
}
/*
input = enter any string : nayan

output = the given string is a palindrome.
*/