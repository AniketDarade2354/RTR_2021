#include<stdio.h>//for printf()
#include<conio.h>//for getch()

//ASCII values For 'A' To 'Z' => 65 To 90
#define CHAR_ALPHABET_UPPER_CASE_BIGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Values For 'a' To 'z' => 97 To 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values For '0' To '9' => 48 To 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declarations
	char ch;
	int ch_value;

	//code
	printf("\n\n");

	printf("Enter Character : ");
	ch = getch();

	printf("\n\n");

	if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))
	{
		printf("Character \'%c\' Entered By You, Is A Vowel CHARACTER From The English Alphabet !!!\n\n", ch);
	}

	else
	{
		ch_value = (int)ch;

		//If The Character Has ASCII Value Between 65 AND 90 OR Between 97 And 122. It Is Still A Letter Of The Alphabet, But It Is A 'CONSTANT', and NOT A 'VOWEL'...
		if ((ch_value >= CHAR_ALPHABET_UPPER_CASE_BIGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSTANT CHARACTER From The English Alphabet !!!\n\n", ch);
		}

		else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You , Is A DIGIT CHARACTER !!!\n\n", ch);
		}
		else
		{
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch);
		}
	}

	return(0);
}

