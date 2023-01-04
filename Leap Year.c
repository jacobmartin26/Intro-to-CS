// Programmer:		Jacob Martin
// Date:			2/28/2021
// Program Name:	Leap Year
// Chapter:			Chapter 3 - Decisions
// Description:		This program receives a year from the user and then decides if that year is a leap year or not.
//                  If the year entered is before 1582, the program will display an error message and stop the program.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userYear = 0; // Year entered by user
	const int GREGORIAN_YEAR = 1582; // Sets a baseline value
	const int EVEN_DIVISION = 0; // Determines if mod of user year = 0
	const int MOD_1 = 4; // year % 4
	int result1 = 0; // result of ^
	const int MOD_2 = 100; // year % 100
	int result2 = 0; // result of ^
	const int MOD_3 = 400; // year % 400
	int result3; // result of ^


	// *** Your program goes here ***
	// *** INPUT AND SOME OUTPUT ***
	printf("Enter a year (after %d): ", GREGORIAN_YEAR); // Prompts for a value for userYear
	scanf("%d", &userYear); // Gets the value
	if (userYear <= GREGORIAN_YEAR) {
		printf("The year entered was not after %d.\n", GREGORIAN_YEAR); // If the year is below 1582 then this error message appears
		exit(0); // Forces program to stop as all outputs would be invalid
	}

	// *** PROCESSING AND OUTPUT ***
	result1 = userYear % MOD_1;
	result2 = userYear % MOD_2;
	result3 = userYear % MOD_3; // Determines if the year entered is evenly divisible

	if (result1 != EVEN_DIVISION) {
		printf("\n");
		printf("The year %d is not a leap year.", userYear); // If the year is not evenly divisible by 4, it is not a leap year
		printf("\n");
	}
	else if ((result1 == EVEN_DIVISION) && (result2 != EVEN_DIVISION)) { 
		printf("\n");
		printf("The year %d is a leap year.", userYear); // If the year is evenly divisible by 4 but not 100, it is a leap year
		printf("\n");
	}
	else if (result3 == EVEN_DIVISION) {
		printf("\n");
		printf("The year %d is a leap year.", userYear); // If the year is evenly divisible by 400, it is a leap year
		printf("\n");
	}
	if (result1 == EVEN_DIVISION && result2 == EVEN_DIVISION && result3 != EVEN_DIVISION) {
		printf("\n");
		printf("The year %d is not a leap year.", userYear); // If the year is divisible by 4 and 100 but not 400, it is not a leap year
		printf("\n");
	}


	return 0;
} // end main()
