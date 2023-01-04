// Programmer:		Jacob Martin
// Date:			2/25/2021
// Program Name:	Shipping Charges
// Chapter:			Chapter 3 - Decisions
// Description:		This program receives the total weight of a package from the user.
//                  The total shipping charge is then displayed depending on the weight.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userWeight = 0.0; // Weight entered by user
	const double TWO_OR_LESS = 2.0;
	const double BETWEEN_2_N_6 = 6.0;
	const double BETWEEN_6_N_10 = 10.0;
	const double WEIGHT_ERROR = 0.00; // Cutoff values
	double charge1 = 1.25;
	double charge2 = 2.50;
	double charge3 = 3.90;
	double charge4 = 4.40; // Shipping charges


	// *** Your program goes here ***
	// *** INPUT ***
	printf("Enter the weight of the package: ");
	scanf("%lf", &userWeight); // User enters weight

	// *** PROCESING AND OUTPUT ***
	if (userWeight <= WEIGHT_ERROR) { // If package weighs 0 or less this is displayed
		printf("The weight of the package must be greater than %.2lf.", WEIGHT_ERROR);
		printf("\n");
	}
	else if (userWeight > WEIGHT_ERROR && userWeight <= TWO_OR_LESS) {
		printf("\n");
		printf("The shipping charge is $%.2lf.", charge1); // Weight over 0 but 2 or less
		printf("\n");
	}
	else if (userWeight > TWO_OR_LESS && userWeight <= BETWEEN_2_N_6) {
		printf("\n");
		printf("The shipping charge is $%.2lf.", charge2); // Weight over 2 but 6 or less
		printf("\n");
	}
	else if (userWeight > BETWEEN_2_N_6 && userWeight <= BETWEEN_6_N_10) {
		printf("\n");
		printf("The shipping charge is $%.2lf.", charge3); // Weight over 6 but 10 or less
		printf("\n");
	}
	else {
		printf("\n");
		printf("The shipping charge is $%.2lf.", charge4); // Weight over 10
		printf("\n");
	}

	return 0;
} // end main()
