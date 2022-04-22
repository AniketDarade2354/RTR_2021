#include<stdio.h>
int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	printf("Printing Numbers From 10 To 1 And 100 To 10 !!!\n\n");

	i = 10;
	j = 100;
	do
	{
		printf("\t%d\t%d\n", i, j);
		i--;
		j = j - 10;
	} while (i >= 1, j >= 10);

	printf("\n\n");

	return(0);
}