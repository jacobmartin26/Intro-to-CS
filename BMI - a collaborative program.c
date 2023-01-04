// Programmer:		Jaxon Christie and Jacob Martin
// Date:			2/27/2021
// Program Name:	BMI - a collaborative program
// Chapter:			Chapter 3 - Decisions
// Description:		This program receives a value for height and a value for weight from the user, and then a BMI is calculated.
//                  Depending on the BMI, the program will say if the user is underweight, overweight, or at an optimal weight.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for the use of the pow () for using powers.
int main(void)
{
	// Constant and Variable Declarations

	int userHeight;
	int userWeight; // Numbers entered by user
	double bodyMassIndex; // Total BMI
	const int LBS_TO_KGS = 703; // Converts pounds to kilograms to find BMI
	const int MAX_HEIGHT = 108;
	const int MIN_HEIGHT = 1;
	const int MAX_WEIGHT = 1000;
	const int MIN_WEIGHT = 1; // Minimums and maximums of height and weight
	const int MIN_BMI = 18.5;
	const int MAX_BMI = 25; // Min and max of BMI

	// *** INPUT AND SOME OUTPUT ***//

	printf("Enter your height (in inches): ");
	scanf("%d", &userHeight); // Gets user's height

	if ((userHeight < MIN_HEIGHT) || (userHeight > MAX_HEIGHT)) {
		printf("Height must be between %d and %d.\n", MIN_HEIGHT, MAX_HEIGHT); // If user does not enter a valid height, this "error" message is displayed
		exit(0); // Forces program to end early since BMI would not be valid
	}
	else {
		printf("Enter your weight (in pounds): ");
		scanf("%d", &userWeight); // Gets user's weight
	}
	if ((userWeight < MIN_WEIGHT) || (userWeight > MAX_WEIGHT)) {
		printf("Weight must be between %d and %d.\n", MIN_WEIGHT, MAX_WEIGHT); // If user does not enter a valid weight, this "error" message is displayed
		exit(0); // Forces program to end early since BMI would not be valid
	}

	// *** PROCESSING AND OUTPUT *** //

	bodyMassIndex = (userWeight * LBS_TO_KGS) / pow(userHeight, 2.0); // Calculates BMI with the given height and weight

	printf("\nYour Body Mass Index (BMI) is %.1lf.", bodyMassIndex); // Displays BMI

	if ((bodyMassIndex < MIN_BMI)) {
		printf("\nYou are underweight.\n"); // If BMI is below the minimum value, this is displayed
	}

	if ((bodyMassIndex > MAX_BMI)) {
		printf("\nYou are overweight.\n"); // If BMI is above the maximum value, this is displayed
	}

	if ((bodyMassIndex >= MIN_BMI) && (bodyMassIndex <= MAX_BMI)) {
		printf("\nYou are at your optimal weight.\n"); // If BMI is between the min and max values, this is displayed
	}


	return 0;
} // end main()