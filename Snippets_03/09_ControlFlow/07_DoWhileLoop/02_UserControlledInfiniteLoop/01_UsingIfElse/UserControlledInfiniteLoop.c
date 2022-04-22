#include<stdio.h>
int main(void)
{
	//variable declarations
	char option, ch = '\0';

	//code
	printf("\n\n");
	printf("Once The Infinite Loop Begins, Enter 'Q' or 'q' To Quit The Infinite For Loop : \n\n");
	printf("Enter 'Y' or 'y' To Infinite User Controlled Infinite Loop : ");
	printf("\n\n");
	option = getch();
	if (option == 'Y' || option == 'y')
	{
		do
		{
			printf("In Loop...\n");
			ch = getch();//control flow waits for character input...
			if (ch == 'Q' || ch == 'q')
				break;//User Controlled Exitting From Infinte Loop

		} while (1);

		printf("\n\n");
		printf("EXITTING USER CONTROLLED INFINITE LOOP...");
		printf("\n\n");
	}

	else
		printf("You Must Press 'Y' or 'y' To Infinite The User Controlled Infinite Loop...Please Try Again...\n\n");

	return(0);
}