#include<stdio.h>

int main(void)
{
	//variable declarations
	float f , f_num = 1.7f;

	//code
	printf("\n\n");

	printf("Printing Numbers From %f To %f !!!\n\n", f_num, (f_num * 10.0f));

	f = f_num;
	while (f <= (f_num * 10.0f))
	{
		printf("\t%f\n", f);
		f = f + f_num;
	}
	printf("\n\n");
	return(0);
}
