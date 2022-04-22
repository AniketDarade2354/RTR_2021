#include<stdio.h>

int main(void)
{
	//variables declarations
	int month;

	//code
	printf("\n\n");

	printf("Enter The Month's Number(1 - 12) : ");
	scanf("%d", &month);

	printf("\n\n");

	if (month == 1)
	{
		printf("The %dst Month Is JANUARY !!!\n\n", month);
	}
	else if (month == 2)
	{
		printf("The %dnd Month Is FEBURARY !!!\n\n", month);
	}
	else if (month == 3)
	{
		printf("The %drd Month Is MARCH !!!\n\n", month);
	}
	else if (month == 4)
	{
		printf("The %dth Month Is APRIL !!!\n\n", month);
	}
	else if (month == 5)
	{
		printf("The %dth Month Is MAY !!!\n\n", month);
	}
	else if (month == 6)
	{
		printf("The %dth Month Is JUNE !!!\n\n", month);
	}
	else if (month == 7)
	{
		printf("The %dth Month Is JULY !!!\n\n", month);
	}
	else if (month == 8)
	{
		printf("The %dth Month Is AUGUST !!!\n\n", month);
	}
	else if (month == 9)
	{
		printf("The %dth Month Is SEPTEMBER !!!\n\n", month);
	}
	else if (month == 10)
	{
		printf("The %dth Month Is OCTOBER !!!\n\n",month);
	}
	else if (month == 11)
	{
		printf("The %dth Month Is NOVEMBER !!!\n\n", month);
	}
	else if (month == 12)
	{
		printf("The %dth Month Is DECEMBER !!!\n\n", month);
	}
	else
	{
		printf("The %dth Month Is Cannot Exists !!!\nPLEASE TRY AGAIN \n\n",month);
	}

	printf(" IF - ELSE - IF BLOCK IS COMPLETE\n");
	return(0);
}