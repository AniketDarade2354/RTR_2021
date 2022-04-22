#include<stdio.h>

int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	printf("Printing Numbers Reverse From 10 To 1 And 100 To 10 !!!\n\n");

	for (i = 10, j = 100; i > 0, j >= 10; i--, j = j - 10)
	{
		printf("\t %d\t %d\n", i, j);
	}

	printf("\n\n");

	return(0);
}