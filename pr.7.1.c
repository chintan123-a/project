#include<stdio.h>

int add(int a, int b)
{
    return a+b;	
}
int subtract(int a, int b)
{
    return a-b;	
}
int multiply(int a, int b)
{
    return a*b;	
}
float divide(int a, int b)
{
    if(a!=0) 
	{
		return(float)a/b;
	}
	else
	{
		printf("error: division by zero!\n");
	}	
}

int modulus(int a, int b)
{
	if(b != 0)
	{
		return a % b;
	}
	else
	{
		printf("error: division by zero!\n");
	}
}

int main()
{
	int choice, a, b;
	
	while(1)
	{
		printf("\n===calculator menu ===\n");
		printf("press 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for %%\n");
		printf("press 0 to exit\n");
		printf("enter your choice: ");
		scanf("%d" , &choice);
		
		if(choice == 0)
	    {
		    printf("exiting program.goodbye!\n");
			break; 
	    }
	    printf("enter two numbers: ");
	    scanf("%d %d" , &a, &b);
	    
	    switch(choice)
	    {
	    	case 1:
	    		printf("result = %d\n", add(a, b));
	    		break;
	    		
	    	case 2:
			    printf("result = %d\n", subtract(a, b));
				break;
				
			case 3:
			    printf("result = %d\n", multiply(a, b));
				break;	
				
			case 4:
			    printf("result = %d\n", divide(a, b));
				break;
				
			case 5:
			    printf("result = %d\n", modulus(a, b));
				break;
				
			default:
			    printf("invalid choice! please try again.\n");	
		}
	}
}