#include<stdio.h>

int main(void)
{
	//variable declarations
	int month;

	//code
	printf("\n\n");

	printf("Enter The Month's Number(1 - 12) :");
	scanf("%d", &month);

	switch (month)
	{
	case 1:
		printf("\nThe %dst Month Is JANUARY\n", month);
		break;
	case 2:
		printf("\nThe %dnd Month Is FEBURARY\n", month);
		break;
	case 3:
		printf("\nThe %drd Month Is MARCH\n", month);
		break;
	case 4:
		printf("\nThe %dth Month Is APRIL\n", month);
		break;
	case 5:
		printf("\nThe %dth Month Is MAY\n", month);
		break;
	case 6:
		printf("\nThe %dth Month Is JUNE\n", month);
		break;
	case 7:
		printf("\nThe %dth Month Is JULY\n", month);
		break;
	case 8:
		printf("\nThe %dth Month Is AUGUST\n", month);
		break;
	case 9:
		printf("\nThe %dth Month Is SEPTEMBER\n", month);
		break;
	case 10:
		printf("\nThe %dth Month Is OCTOBER\n", month);
		break;
	case 11:
		printf("\nThe %dth Month Is NOVEMBER\n", month);
		break;
	case 12:
		printf("\nThe %dth Month Is DECEMBER\n", month);
		break;
	default:
		printf("\nThe %dth Month Cannot Exists !!!\nPlease Try Again\n", month);
		break;
	}

	printf("\nSwitch Case Block Complete !!!");
	return(0);
}