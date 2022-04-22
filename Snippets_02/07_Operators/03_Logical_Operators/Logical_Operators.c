#include<stdio.h>

int main()
{
	//variable declarations
	int a;
	int b;
	int c;
	int result;

	//code
	printf("\n\n");
	printf("Enter First Integer :");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Second Integer :");
	scanf("%d", &b);

	printf("\n\n");
	printf("Enter Third Integer :");
	scanf("%d", &c);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n ");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	result = (a <= b) && (b != c);
	printf("LOGICAL AND (&&) : Answer Is True (1) If And Only If BOTH Conditions Are True.The Answer Is False (0), If Any One Or Both Conditions Are False.\n\n");
	printf(" A = %d Is Less Than Or Equal To B = %d And B = %d Is Not Equal To C = %d\tAnswer =  %d\n\n", a, b, b, c, result);

	result = (b >= a) || (a == c);
	printf("LOGICAL OR (||) : Answer Is FALSE (0) If And Only If BOTH Conditions Are False . The Answer Is TRUE (1), If Any One Or Both Conditions Are True.\n");
	printf("Either B = %d Is Greater Than Or Equal To A = %d OR A = %d Is Equal To c = %d \t Answer = %d\n\n", b, a, a, c, result);

	result = !a;
	printf("A = %d And Using Logical NOt (!) Operator On A Gives Result = %d\n\n", a, result);

	result = !b;
	printf("B = %d And Using Logical NOT (!) Operator On B Gives Result = %d\n\n",b,result);

	result = !c;
	printf("C = %d And Using Logical NOT (!) Operator On C Gives Result = %d\n\n", c, result);

	result = (!(a <= b) && !(b != c));
	printf("Using Logical NOT (!) On (a <= b) And Also On (b != c) And Then ANDing Them Afterwards Gives Result = %d\n", result);

	printf("\n\n");

	result = !((b >= a) || (a == c));
	printf("Using Logical NOT (!) On Entire Logical Expression (b >= a) || (a == c) Gives Result = %d\n",result);

	printf("\n\n");

	return(0);

}
