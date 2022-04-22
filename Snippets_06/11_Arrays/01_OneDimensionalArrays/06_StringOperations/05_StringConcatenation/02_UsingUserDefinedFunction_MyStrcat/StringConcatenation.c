#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype 
	void MyStrcat(char[],char[]);
	
	//variable declarations
	char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH];// A Character Array Is A String
	
	//code
	
	// *** STRING INPUT ***
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One,MAX_STRING_LENGTH);
	
	printf("\n\n");
	printf("Enter Second String : \n\n");
	gets_s(chArray_Two,MAX_STRING_LENGTH);
	
	// *** STRING CONCAT ***
	printf("\n\n");
	printf("******* BEFORE CONCATENATION ********");
	printf("\n\n");
	printf("The Original First String Entered By you (i.e : 'chArray_One[]') IS : \n\n");
	printf("%s\n",chArray_One);
	
	printf("\n\n");
	printf("The Original Second String Entered By You (i.e : 'chArray_Two[]') Is : \n\n");
	printf("%s\n",chArray_Two);
	
	MyStrcat(chArray_One,chArray_Two);
	
	printf("\n\n");
	printf("'chArray_One[]' Is : \n\n");
	printf("%s\n",chArray_One);
	
	printf("\n\n");
	printf("'chArray_Two[]' Is : \n\n");
	printf("%s\n", chArray_Two);
	
	return(0);
	
}

void MyStrcat(char str_destination[],char str_source[])
{
	//function prototype
	int Mysltrlen(char[]);
	
	//variable declarations
	int iStringLength_source = 0, iStringLength_Destination = 0;
	int i,j;
	
	//code
	iStringLength_source = Mysltrlen(str_source);
	iStringLength_Destination = Mysltrlen(str_destination);
	
	// ARRAY INDICES BEGIN FROM 0, LAST VALID INDEX OF ARRAY WILL ALWAYS BE (LENGTH - 1)
	// SO, CONCATENATION MUST BEGIN FROM INDEX NUMBER EQUAL TO LENGTH OF THE ARRAY 'str_destination'
	// WE NEED TO PUT THE CHARACTER WHICH IS AT FIRST INDEX OF 'str_source' TO THE (LAST INDEX + 1) OF 'str_destination'
	for (i = iStringLength_Destination,j = 0;j < iStringLength_source;i++,j++)
	{
		str_destination[i] = str_source[j];
	}
	str_destination[i] = '\0';
}

int Mysltrlen(char str[])
{
	//variable declarations
	int j ;
	int string_length = 0 ;
	
	//code
	// ***	DETERMINING EXACT LENGTH OF THE STRING, BY DETECTING THE FIRST OCCURENCE OF NULL-TERMINATING CHARACTER ( \0 ) ***
	for (j = 0;j < MAX_STRING_LENGTH;j++)
	{
		if(str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}