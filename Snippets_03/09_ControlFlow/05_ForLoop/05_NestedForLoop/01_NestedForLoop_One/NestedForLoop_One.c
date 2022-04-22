#include<stdio.h>

int main(void)
{
	//variable declarations
	int i, j;

	//code
	printf("\n\n");

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		printf("-------------|");
		for (j = 1; j <= 5; j++)
		{
			printf("\t%d", j);
		}
		printf(" |\t##############\n\n");
	}

	printf("\n\n");

	return(0);
}