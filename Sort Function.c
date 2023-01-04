// Programmer:		Jacob Martin
// Date:			4/1/2021
// Program Name:	Sort Function
// Chapter:			Chapter 6 - Functions
// Description:		In this program, the user enters 10 values into an array.
//                  These values are displayed as entered, and then displayed again sorted from lowest to highest.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

void DisplayArray(const double anArray[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%.2lf\n", anArray[i]);
	}
}

void PopulateArray(double anArray[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("Enter a value for array element [%d]: ", i);
		scanf("%lf", &anArray[i]);
	}
}

void SortArray(double anArray[], int arraySize) {
	double tempValue = 0.0;

	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < arraySize - (i + 1); j++) {
			if (anArray[j] > anArray[j + 1]) {
				tempValue = anArray[j];
				anArray[j] = anArray[i];
				anArray[i] = tempValue;
			}
		}
	}
}

int main(void)
{
	// Constant and Variable Declarations
	const int SIZE = 10; // array size
	double userArray[10]; // array to hold the 10 user values

	// *** Your program goes here ***
	PopulateArray(userArray, SIZE);
	printf("\n");

	printf("The un-sorted array:\n");
	DisplayArray(userArray, SIZE);
	printf("\n");

	SortArray(userArray, SIZE);

	printf("The sorted array:\n");
	DisplayArray(userArray, SIZE);

	printf("\n");

	return 0;
} // end main()
