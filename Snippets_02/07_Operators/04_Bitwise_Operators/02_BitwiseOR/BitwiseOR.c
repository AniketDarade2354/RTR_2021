#include<stdio.h>

int main(void)
{
	//function protypes
	void Print_Binary_Form_Of_Number(unsigned int);

	//variable declarations
	unsigned int a;
	unsigned int b;
	unsigned int result;

	//code
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &a);

	printf("\n\n");
	printf("Enter Another Integer = ");
	scanf("%u", &b);

	printf("\n\n\n\n");
	result = a | b;
	printf("Bitwise OR-ing Of \nA = %d (Decimal) And B = %d (Decimal) Gives Result %d (Decimal).\n\n", a, b, result);

	Print_Binary_Form_Of_Number(a);
	Print_Binary_Form_Of_Number(b);
	Print_Binary_Form_Of_Number(result);

	return(0);

}

//****** BEGINNERS TO C PROGRAMMING LANGUAGE : PLEASE IGNORE THE CODE OF THE FOLLOWING FUNCTION SNIPPET 'Print_Binary_Form_Of_Number()' ***********
//****** YOU MAY COME BACK TO THIS CODE AND WILL UNDERSTAND IT MUCH BETTER AFTER YOU HAVE COVERED  : ARRAYS, LOOPS AND FUNCTIONS *********
//****** THE ONLY OBJECTIVE OF WRITTING THIS FUNCTION WAS TO OBTAIN THE BINARY  REPRESENTATION OF DECIMAL INTEGERS SO THAT BIT-WISE AND-ing, OR-ing, COMPLEMENT AND BIT-SHIFTING COULD BE UNDERSTOOD WITH GREAT EASE *******

void Print_Binary_Form_Of_Number(unsigned int decimal_number)
{
	//variable declarations
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		binary_array[i] = 0;

	printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
	num = decimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}

	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n\n");

}