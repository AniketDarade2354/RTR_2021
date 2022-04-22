#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declarations
	int iArray[NUM_ELEMENTS];
	int i,num,sum=0;
	
	//code
	printf("Enter Integer Elements For Array(10) : \n\n");
	for(i = 0;i < NUM_ELEMENTS;i++)
	{
		scanf("%d",&num);
		iArray[i]=num;
	}
	
	for(i = 0;i < NUM_ELEMENTS;i++)
	{
		sum = sum + iArray[i];
	}
	
	printf("\n\n");
	printf("Sum Of All Elements Of Array = %d\n\n",sum);
	
	return(0);
}