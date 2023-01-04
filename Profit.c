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
	double projectedSales = 0.0;
	double projectedProfit = 0.0;
	const double PROFIT_PERCENTAGE = 0.21; // 21%


	// *** Your program goes here ***
	// *** INPUT ***
	// Prompt for the sales
	printf("Enter the projected amount of total sales: $");
	// Get the sales
	scanf("%lf", &projectedSales);
	printf("\n"); // blank line

	// *** PROCESSING ***
	// Calculate the profit
	projectedProfit = projectedSales * PROFIT_PERCENTAGE;

	// *** OUTPUT ***
	// Display the profit
	printf("The amount of profit that will be made from sales\n");
	printf("of $%.2lf is $%.2lf.\n", projectedSales, projectedProfit);

	printf("\n"); // blank line
	return 0;
} // end main()
