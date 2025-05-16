#include<stdio.h>

int main()
{
	
	int score;
	char grade;
	
	printf("enter the score (0 - 100): ");
	scanf("%d" , &score);
	
	if(score < 0 || score > 100)
	{
		printf("invalid score! please enter a value between 0 and 100.\n");
	}

    grade = (score >= 90) ? 'A' :
		    (score >= 80) ? 'B' :
		    (score >= 70) ? 'C' :
		    (score >= 60) ? 'D' :
		    (score >= 50) ? 'E' :
		    	            'F' ,
	
	printf("grade: %c\n" , grade);
	
	switch (grade)
	{
		case 'A':
			printf("excellent performance!\n");
			break;
		
		case 'B':
			printf("very good ! keep it up.\n");
			break;
			
		case 'C':
			printf("good , but there's room for improvement.\n");
			break;
			
		case 'D':
			printf("fair effort. try harder next time.\n");
			break;
			
		case 'E':
			printf("needs improvement.\n");
			break;
			
		case 'F':
			printf("failing grade. don't give up , study more!\n");
			break;
			
		default:
			printf("error in grade calculation.\n");
    }
     
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' )
	{
		printf("eligible for the next level.\n");
	}
	else
	{
		printf("not eligible for the next level.\n");
	}
}
/*
input = 67
output = D
*/