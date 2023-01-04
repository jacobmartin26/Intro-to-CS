// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userAge = 0;


	// *** Your program goes here ***
	printf("Hello Jacob.\n");

	// Prompt
	printf("Enter you age: ");
	// Get the age
	scanf("%d", &userAge);
	// Display the age
	printf("You are %d years old.\n", userAge);

	printf("\n"); // Blank line
	return 0;
} // end main()
