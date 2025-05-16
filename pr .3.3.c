#include<stdio.h>

int main()
{
	int number , originalNumber , firstDigit , lastDigit;
	
	printf("enter a number: ");
	scanf("%d" , &number);
	
	originalNumber = number ;
	
	if (number < 0)
	{
		number = -number;
	}
	
	lastDigit = number % 10;
	
	while (number >= 10)
	{
		number /= 10;
	}
	
	firstDigit = number;
	
	int sum = firstDigit + lastDigit ;
	
	printf("first digit: %d\n" , firstDigit);
	
	printf("last digit: %d\n" , lastDigit);
	
	printf("sum of first and last digit: %d\n" , sum);
}
/*
input = 7983
output = 10
*/