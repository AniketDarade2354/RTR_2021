#include<stdio.h>

int main(void)
{
	//variable declarations
	char option, ch = '\0';

	//code

	printf("\n\n");

	printf("*** When Infinite Loop Start's Press 'Q' or 'q' For Quit The Infinite For Loop *** \n");
	printf("Enter 'Y'or 'r' To Initiate The User Controlled Infinite For Loop : ");
	printf("\n\n");
	option = getch();
	option = 'y';
	if (option == 'Y' || option == 'y')
	{
		for (;;)
		{
			printf("In Loop...");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
			{
				break;
			}
		}
	}

	printf("\n\n");
	printf("EXITING USER CONTROLLED INFINITE FOR LOOP !!!");
	printf("\n\n");
	return(0);
}