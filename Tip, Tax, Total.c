// Programmer:		Jacob Martin
// Date:			2/14/2021
// Program Name:	Tip, Tax, Total
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program receives a bill amount from the user.
//					A total is then calculated by multiplying the bill by the tax and tip rate then adding it all together.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double billAmount = 0.0;
	const double TIP_PERCENTAGE = 0.15; // Tip rate of 15%
	const double TAX_PERCENTAGE = 0.07; // Tax rate of 7%
	double billTotal = 0.0;
	double tipTotal = 0.0;
	double taxTotal = 0.0;

	// *** Your program goes here ***
	// *** INPUT ***
	printf("Enter the amount of the bill: $");
	scanf("%lf", &billAmount); // Gets bill amount from user
	printf("\n");

	// *** PROCESSING ***
	tipTotal = billAmount * TIP_PERCENTAGE; // Calculates total tip
	taxTotal = billAmount * TAX_PERCENTAGE; // Calculates total tax
	billTotal = billAmount + taxTotal + tipTotal; // Calculates final total

	// *** OUTPUT ***
	printf("Based on a bill of $%.2lf, the calculated amounts are:\n", billAmount);
	printf("  Tip = $%.2lf\n", tipTotal); // Displays total tip
	printf("  Tax = $%.2lf\n", taxTotal); // Displays total tax
	printf("Total = $%.2lf\n", billTotal); // Displays final amount
	printf("\n"); //blank line

	return 0;
} // end main()
