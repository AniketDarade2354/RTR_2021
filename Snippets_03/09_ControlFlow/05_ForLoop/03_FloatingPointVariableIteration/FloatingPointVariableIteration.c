#include<stdio.h>

int main(void)
{
	//variable declarations
	float f, f_num = 1.7f;

	//code
	printf("\n\n");

	printf("Printing Numbers From %f To %f !!!\n\n", f_num, (f_num * 10.0f));

	for (f = f_num; f <= (f_num * 10.0f); f = f + f_num)
	{
		printf("\t%f\n", f);
	}

	printf("\n\n");

	return(0);
}