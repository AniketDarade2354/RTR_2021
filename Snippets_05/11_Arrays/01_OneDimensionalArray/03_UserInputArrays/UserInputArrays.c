#include<stdio.h>

//MACRO CONSTANT USED AS ARRAY SIZE IN SUBSCRIPT AND AS ARRAY LENGTH.
//HENCE, THIS PRORAM'S ARRAYS SIZES CAN BE SIMPLY CHANGED THESE FOLLOWING 3 GLOBAL MACRO CONSTANT VALUES, BEFORE COMPILING, LINKING AND EXECUTING THE PROGRAM !!!

#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main(void)
{
	//variable declarations
	int iArray[INT_ARRAY_NUM_ELEMENTS];
	float fArray[FLOAT_ARRAY_NUM_ELEMENTS];
	char cArray[CHAR_ARRAY_NUM_ELEMENTS];
	int i,num;
	
	//code
	
	// *** ARRAY ELEMENTS INPUT ***
	printf("\n\n");
	printf("Enter Elements For 'Integer' Array : \n");
	for(i = 0;i < INT_ARRAY_NUM_ELEMENTS;i++)
	{
		scanf("%d",&iArray[i]);
	}

	printf("\n\n");
	printf("Enter Elements For 'Floating-Pointing' Array : \n");
	for(i = 0;i < FLOAT_ARRAY_NUM_ELEMENTS;i++)
	{
		scanf("%f",&fArray[i]);
	}	
	
	printf("\n\n");
	printf("Enter Elements For 'Character' Array : \n");
	for(i = 0;i < CHAR_ARRAY_NUM_ELEMENTS;i++)
	{
		cArray[i] = getch();
		printf("%c\n",cArray[i]);
	}
	
	//*** ARRAY ELEMENT OUTPUT ***
	printf("\n\n");
	printf("Integer Array Entered By You : \n\n");
	for(i = 0;i<INT_ARRAY_NUM_ELEMENTS;i++)
	{
		printf("%d\n",iArray[i]);
	}

	printf("\n\n");
	printf("Floatin-Pointing Array Entered By You : \n\n");
	for(i = 0;i<FLOAT_ARRAY_NUM_ELEMENTS;i++)
	{
		printf("%f\n",fArray[i]);
	}
	
	printf("\n\n");
	printf("Character Array Entered By You : \n\n");
	for(i = 0;i<CHAR_ARRAY_NUM_ELEMENTS;i++)
	{
		printf("%c\n",cArray[i]);
	}
	return(0);
}