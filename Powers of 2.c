// Programmer:		John Frick and Jacob Martin
// Date:			3/11/2021
// Program Name:	Powers of 2 - a collaborative program
// Chapter:			Chapter 4 - Repetition
// Description:		In this program, a user enters a number between 1 and 20.
//                  The computer then takes that number and displays all powers of two from 1 to the entered number.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for pow() function

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUM = 1;
	const int MAX_NUM = 20; // Minimum and maximum values
	int userNum = 0; // Number entered by user
	const int POWER_OF_TWO = 2; // Number to be multiplied by power
	int resultingNum = 0; // 2^all values up to userNum
	int countingVar = 0; // Controls how man times to loop


	// *** Your program goes here ***
	printf("Enter an integer (between %d and %d): ", MIN_NUM, MAX_NUM); // Prompt for number
	scanf("%d", &userNum); // Gets userNum

	while (userNum > MAX_NUM || userNum < MIN_NUM ) { // Validation loop
		printf("The integer entered, %d, is not in the range of %d and %d.\n", userNum, MIN_NUM, MAX_NUM);
		printf("Please re-enter the integer: "); // If out of range, re-enter the number
		scanf("%d", &userNum);
	}

	for (countingVar = 1; countingVar <= userNum; countingVar++) { // Loop to display the powers of 2
		resultingNum = pow(POWER_OF_TWO, countingVar); // Calculates 2^ of a value
		printf("\n%d^%d = %d", POWER_OF_TWO, countingVar, resultingNum); // Displays all the calculated powers
	}
		printf("\n"); // Blank line

	return 0;
} // end main()
