#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	int MyStrlen(char[]);
	
	//variable declarations
	char chArray[MAX_STRING_LENGTH]; // A Character Array Is A String
	int iStringLength;
	int i;
	int word_count = 0,space_count = 0;
	
	//code
	
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(chArray,MAX_STRING_LENGTH);
	
	iStringLength = MyStrlen(chArray);
	
	for(i = 0;i < iStringLength;i++)
	{
		switch (chArray[i])
		{
			case 32:// 32 IS THE ASCII VALUE FOR SPACE (' ') CHARACTER
			    space_count++;
				break;
			default:
				break;
		}
	}
	
	word_count = space_count + 1;
	
	// *** STRING OUTPUT ***
	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n",chArray);
	
	printf("\n\n");
	printf("Number Of Spaces In The Input String = %d\n\n",space_count);
	printf("Number Of Word In The Input String = %d\n\n",word_count);
	
	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations
	int i;
	int len = 0 ;
	
	//code
	// *** DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for(i = 0;i < MAX_STRING_LENGTH;i++)
	{
		if(str[i] == '\0')
			break;
		else
			len++;
	}
	return(len);
}
