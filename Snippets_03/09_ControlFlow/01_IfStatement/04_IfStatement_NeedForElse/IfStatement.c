#include<stdio.h>

int main(void)
{
	//variable declarations
	int age;

	//code
	printf("\n\n");

	printf("Enter Your Age :");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("You Are Not Eligible For Voting\n");
	}
	else {
		printf("You Are Eligible For Voting\n");
	}

	return(0);
}