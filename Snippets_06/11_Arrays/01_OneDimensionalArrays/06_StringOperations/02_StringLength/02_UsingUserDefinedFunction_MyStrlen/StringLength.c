#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	
	//variable declarations
	char chArray[MAX_STRING_LENGTH];// A Character Array Is A String
	int iStringLength = 0;
	
	//code
	
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray,MAX_STRING_LENGTH);
	
	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n",chArray);
	
	// *** STRING LENGTH ***
	printf("\n\n");
	iStringLength = MyStrlen(chArray);
	printf("Length Of String Is = %d Characters !!!\n\n",iStringLength);
	
	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations
	int i;
	int len = 0;
	
	//code
	for(i = 0;i < MAX_STRING_LENGTH;i++)
	{
		if(str[i] == '\0')
			break;
		else
			len++;
	}
	return(len);
}