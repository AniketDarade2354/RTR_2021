#include<stdio.h>

int main(void)
{
	//variable declarations
	int a;

	//code
	a = 5;//Non-Zero Positive Value
	if (a)
	{
		printf("If Block 1 : 'A' Exists And Has Value = %d.\n\n", a);
	}

	a = -5;//Non-Zero Negative Value
	if (a)
	{
		printf("If Block 2 : 'A' Exists And Has Value = %d.\n\n", a);
	}

	a = 0;//Zero Value
	if (a)
	{
		printf("If Block 3 : 'A' Exists And Has Value = %d.\n\n", a);
	}

	return(0);
}