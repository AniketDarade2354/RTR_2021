#include<stdio.h>

int main(void)
{
	//variable declarations
	char option,ch = '\0';

	//code
	printf("\n\n");

	printf("When Loop Start Press 'Q' or 'q' for Quit !!!\n\n");

	printf("When Loop Start Press 'Y' or 'y' for Looping !!!\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		while (1) {
			printf("In Loop...");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
			{
				break;
			}
		}
	}
	else
	{
		printf("Please Enter The 'Y' or 'y' For Start The Loop!!!\n\n");
	}

	return(0);
}