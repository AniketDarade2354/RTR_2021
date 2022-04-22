#include<stdio.h>

int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	printf("Printing Numbers From 1 To 10 And 10 To 100 !!!\n\n");

	i = 1;
	j = 10;
	while (i <= 10, j <= 100)
	{
		printf("\t%d\t%d\n", i, j);
		i++;
		j = j + 10;
	}

	printf("\n\n");

	return(0);
}