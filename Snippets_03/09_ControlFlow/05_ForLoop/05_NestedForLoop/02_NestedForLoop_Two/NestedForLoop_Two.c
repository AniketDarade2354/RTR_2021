#include<stdio.h>

int main(void)
{
	//variable declarations
	int i, j, k;

	//code
	printf("\n\n");

	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		printf("-------------|");
		for (j = 1; j <= 5; j++)
		{
			printf("\n\t%d ", j);
			printf("***********|");
			printf("\n");
			for (k = 1; k <= 3; k++)
			{
			
				printf("\t\t%d\n", k);
				
			}
		}
		printf("##############\n\n");
	}

	printf("\n\n");

	return(0);
}