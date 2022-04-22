#include<stdio.h>//for printf()
#include<conio.h>//for getch()

//ASCII Values For 'A' To 'Z' => 65 To 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Values For 'a' to 'z' => 97 To 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values For '0' To '9' => 48 to 57
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

	switch (ch)
	{
	case 'A':
	case 'a':

	case 'E':
	case 'e':

	case 'I':
	case 'i':

	case 'O':
	case 'o':

	case 'U':
	case 'u':
		printf("Character \'%c\' Entered By You, Is A VOWEL CHARACTER From The English Alphabet !!!\n\n", ch);
		break;
	default:
		ch_value = (int)ch;
		//If The Character Has ASCII Value Between 65 AND 90 OR Between 97 AND 122, It Is Still A Letter OF THE ALPHABET,But It Is A 'CONSTANT', and NOT a 'VOWEL'...

		if ((ch >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSTANT CHARACTER From The English Alphabet !!!\n\n",ch);
		}
		else if (ch >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n\n", ch);
		}
		else
		{
			printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER !!!\n\n", ch);
		}
		break;
	}

	printf("Switch Case Block Complete !!!\n\n");

	return(0);
}