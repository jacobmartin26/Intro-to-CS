// Programmer:		Jacob Martin
// Date:			4/13/2021
// Program Name:	MyToUpper
// Chapter:			Chapter 6 - Functions
// Description:		In this program, the user will enter a string of up to 20 characters.
//                  The string will be converted to all uppercase in a function and then displayed in main().

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for strlen()
#include <ctype.h> // Needed for toupper()

void MyToUpper(char userString[20]) { // Function used to uppercase a string
	for (int i = 0; i < strlen(userString); i++) {
		userString[i] = toupper(userString[i]); // Converts each letter to uppercase
	}
	return;
}

int main(void)
{
	// Constant and Variable Declarations
	char userString[20]; // Varaible to hold user entered string

	// *** Your program goes here ***
	printf("Enter a string: ");
	fgets(userString, 20, stdin); // User enters string
	printf("\n");

	printf("The string you entered was: %s\n", userString); // Displays original string

	MyToUpper(userString); // Passes string to function

	printf("The string converted to uppercase is: %s", userString); // Displays modified string

	printf("\n");
	return 0;
} // end main()
