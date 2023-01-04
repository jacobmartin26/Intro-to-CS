// Programmer:		Jacob Martin
// Date:			3/25/2021
// Program Name:	Reverse and Average
// Chapter:			Chapter 5 - Arrays
// Description:		In this program a user will enter numbers to fill out an array.
//                  The given numbers will then be reversed and have the average calculated.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userArray[10]; // Array with values from user
	int reverseArray[10]; // userArray with values reversed
	double averageArray[10]; // Average of the sum of each element from both arrays
	int i = 0; // Counter


	// *** Your program goes here ***
	for (i = 0; i < 10; i++) {
		printf("Enter array element #%d: ", i + 1);
		scanf("%d", &userArray[i]); // User enters the 10 values for userArray
	}
	printf("\n");
	
	printf("The original array...\n");

	for (i = 0; i < 10; i++) {
		printf("%d\t", userArray[i]); // Prints all the values of userArray
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		reverseArray[(10 - 1) - i] = userArray[i]; // Reverses the values of userArray
	}

	printf("The reverse array...\n");

	for (i = 0; i < 10; i++) {
		printf("%d\t", reverseArray[i]); // Prints the reversed values
	}
	printf("\n");

	printf("The average array...\n");

	for (i = 0; i < 10; i++) {
		averageArray[i] = (((double)userArray[i] + (double)reverseArray[i]) / 2); // Calculates the averages between the elements of each array
	}

	for (i = 0; i < 10; i++) {
		printf("%.1lf\t", averageArray[i]); // Prints the averages
	}
	printf("\n");

	return 0;
} // end main()
