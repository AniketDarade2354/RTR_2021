#include<stdio.h>

// *** GLOBAL SCOPE ***

int main(void)
{
	// *** LOCAL SCOPE OF main() begins ***

	// variable declarations
	// 'a' is a Local Variable. It is local to main() only.
	int a = 5;

	//function prototypes
	void change_count(void);

	//code
	printf("\n");
	printf("A = %d\n\n",a);

	// local_count is initialized to 0.
	// local_count = local_count + 1 = 0 + 1 = 1
	change_count();

	// Since, 'local_count' is a local static variable of change_count(), it will retain its value from previous call to change_count().
	// So local_count is 1
	// local_count = local_count + 1 = 1 + 1 = 2
	change_count();
	
	// Since, 'local_count' is a local static variable of change_count(), it will retain its value from previous call to change_count().
	// So local_count is 1
	// local_count = local_count + 1 = 2 + 1 = 3
	change_count();

	return(0);

	// *** LOCAL SCOPE OF main() ends ***
}

// *** GLOBAL SCOPE ***

void change_count(void)
{
	// *** LOCAL SCOPE OF change_count() begins ***
	// variable declarations
	// 'local_count' is a Local its value between calls to change_count() only.
	// It will retain its value between calls to change_count()
	static int local_count = 0;

	//code
	local_count = local_count + 1;
	printf("Local Count = %d\n", local_count);

	// *** LOCAL SCOPE OF change_count() ends ***
}

// *** GLOBAL SCOPE ***