// Programmer:		Jacob Martin
// Date:			4/1/2021
// Program Name:	Bubble Sort
// Chapter:			Chapter 5 - Arrays
// Description:		In this program, the user enters 10 values into an array.
//                  These values are displayed as entered, and then displayed again sorted from lowest to highest.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double temp = 0.0; // variable to hold an array value temporarily
	int i = 0; // loop counter
	int j = 0; // loop counter
	const int SIZE = 10; // array size
	double userArray[10]; // array to hold the 10 user values

	// *** Your program goes here ***

	for (i = 0; i < SIZE; i++) { // loop that user fills out with 10 values
		printf("Enter a value for array element [%d]: ", i);
		scanf("%lf", &userArray[i]);
	}

	printf("\n");

	printf("The un-sorted array:\n"); // displays the array in the order entered
	for (i = 0; i < SIZE; i++) {
		printf("%.2lf\n", userArray[i]);
	}

	// bubble sort algorithm
	for (i = 0; i < SIZE - 1; i++) { // controls number of passes
		for (j = 0; j < SIZE - (i + 1); j++) { // controls number of comparisons per pass
			if (userArray[j] > userArray[j + 1]) { // if condition met = values swapped
				temp = userArray[j]; // value 1 held temporarily
				userArray[j] = userArray[j + 1]; // value 1 replaced with value 2
				userArray[j + 1] = temp; // value 2 replaced with temp value
			}
		}
	}

	printf("\n");

	printf("The sorted array:\n"); // displays the newly sorted array
	for (i = 0; i < SIZE; i++) {
		printf("%.2lf\n", userArray[i]);
	}

	printf("\n");

	return 0;
} // end main()
