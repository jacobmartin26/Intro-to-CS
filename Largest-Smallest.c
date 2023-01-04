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
	double userVals[10];
	const int SIZE = 10;
	char fullName[30];
	double largestValue = 0.0;
	double smallestValue = 0.0;


	// *** Your program goes here ***
	// *** INPUT ***
	// Get the user's full name
	printf("Enter your full name: ");
	fgets(fullName, 30, stdin);
	// Strip ending <enter> off the string if there is one
	if (fullName[strlen(fullName) - 1] == '\n') fullName[strlen(fullName) - 1] = '\0';
	printf("\n");

	// Get the array values
	for (int i = 0; i < 10; i++) {
		// Populate the array
		printf("Enter a value for array element #%d: ", i);
		scanf("%lf", &userVals[i]);
	}
	printf("\n");

	// *** PROCESSING ***
	// Set largest and smallest equal to first value
	largestValue = userVals[0];
	smallestValue = userVals[0];

	// Loop through array looking for largest and smallest values
	// Can start at currentVal = 1 since element[0] has already been set as largest/smallest
	for (int currentVal = 1; currentVal < 10; currentVal++) {
		// If the current value you're on is larger than the stored value, that new value is stored as the largest value
		if (userVals[currentVal] > largestValue) largestValue = userVals[currentVal];
		// If the current value you're on is smaller than the stored value, that new value is stored as the smallest value
		if (userVals[currentVal] < smallestValue) smallestValue = userVals[currentVal];
	}

	//*** OUTPUT ***
	// Display the values
	printf("Based on the values entered by %s, \n", fullName);
	printf("the largest value entered was %.2lf, \n", largestValue);
	printf("and the smallest value entered was %.2lf.\n", smallestValue);

	printf("\n");

	return 0;
} // end main()
