#include<stdio.h>

int main(void)
{
	//variable declarations
	int age;

	//code
	printf("Enter Your Age :");
	scanf("%d", &age);
	if (age < 18)
	{
		printf("Entering if-block.....\n\n");
		printf("You Are Not Eligible For Voting !!!\n\n");
	}
	else
	{
		printf("Entering else-block....\n\n");
		printf("You Are Eligible For Voting !!!\n\n\n");
	}
	printf("Bye !!!\n\n");
	return(0);
}