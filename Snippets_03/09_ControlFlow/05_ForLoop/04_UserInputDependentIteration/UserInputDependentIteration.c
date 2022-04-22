#include<stdio.h>

int main(void)
{
	//variable declarations
	int num, i_num, i;

	//code

	printf("\n\n");

	printf("Enter The Number To Begin The Iteration :");
	scanf("%d",&num);

	printf("\n");
	printf("Enter The Number For How Many Digits Print After %d : ", num);
	scanf("%d", &i_num);

	printf("Printing The Numbers From %d To %d !!!\n\n", num, (i_num + num));

	for (i = num; i <= (i_num + num); i++)
	{
		printf("\t%d\n", i);
	}

	printf("\n\n");

	return(0);
}