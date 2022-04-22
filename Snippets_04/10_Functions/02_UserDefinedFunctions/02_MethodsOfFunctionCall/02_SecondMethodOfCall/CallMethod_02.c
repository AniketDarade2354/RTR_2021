#include<stdio.h>// 'stdio.h' contains declaration of 'printf()'

// *** USER DEFINIEDFUNCTIONS : METHOD OF CALLING FUNCTION 2 ***
// *** CALLING ONLY TWO FUNCTIONS DIRECTLY IN main(), REST OF THE FUNCTIONS TRACE THEIR CALL INDIRECTLY TO main() ***

int main(int argc, char* argv[], char* envp[])
{
	//function prototypes
	void display_information(void);
	void Function_Country(void);

	//code
	display_information();//function call
	Function_Country();//function call

	return(0);
}

// *** User-Defined Functions Definitions... ***
void display_information(void)
{
	//function prototypes
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_Surname(void);
	void Function_OfAMC(void);

	//code

	// *** FUNCTION CALLS ***
	Function_My();
	Function_Name();
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_Surname();
	Function_OfAMC();
}

void Function_My(void)
{
	//code
	printf("\n\n");

	printf("My");
}

void Function_Name(void)
{
	//code
	printf("\n\n");

	printf("Name");
}

void Function_Is(void)
{
	//code
	printf("\n\n");

	printf("Is");
}
void Function_FirstName(void)
{
	//code
	printf("\n\n");

	printf("Aniket");
}

void Function_MiddleName(void)
{
	//code
	printf("\n\n");

	printf("Utreshwar");
}

void Function_Surname(void)
{
	//code
	printf("\n\n");

	printf("Darade");
}

void Function_OfAMC(void)
{
	//code
	printf("\n\n");

	printf("Of ASTROMEDICOMP");
}

void Function_Country(void)
{
	printf("\n\n");

	printf("I Live In India.");

	printf("\n\n");
}