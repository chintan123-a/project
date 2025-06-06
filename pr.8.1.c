#include<stdio.h>

int findlength(char*ptr)
{
	int length = 0;
	while(*ptr != '\0')
	{
		length++;
		ptr++;
	}
	return length;
}
int main()
{
	char str[100];
	
	printf("enter any string: ");
	fgets(str, sizeof(str),stdin);
	
	int len = findlength(str);
	printf("the length of the string is: %d\n", len - 1);
}
/*
input = 123
output = 3
*/