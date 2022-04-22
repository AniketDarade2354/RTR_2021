#include<stdio.h>

int main(void)
{
	//variable declarations
	int num;
	 
	 //code
	printf("Enter The Number : ");
	scanf("%d", &num);

	// IF - ELSE - IF LADDER BEGAINS FROM HERE....
	if (num < 0)
	{
		printf("Num = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num);
	}
	else if ((num > 0) && (num <= 100))
	{
		printf("Num = %d Is Between To 0 And 100 !!!\n\n", num);
	}
	else if ((num > 100) && (num <= 200))
	{
		printf("Num = %d Is Between To 100 And 200 !!!\n\n", num);
	}
	else if ((num > 200) && (num <= 300))
	{
		printf("Num = %d Is Between To 200 And 300 !!!\n\n", num);
	}
	else if ((num > 300) && (num <= 400))
	{
		printf("Num = %d Is Between To 300 And 400 !!!\n\n", num);
	}
	else if ((num > 400) && (num <= 500))
	{
		printf("Num = %d Is Between To 400 And 500 !!!\n\n", num);
	}
	else if (num > 500)
	{
		printf("Num = %d Is Greater Than 500 !!!\n\n", num);
	}
	// ***** THERE IS NO TERMINATING 'ELSE'
	return(0);
}