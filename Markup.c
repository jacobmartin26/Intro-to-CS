// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Function Prototypes
double CalculateRetail(double wholesaleCost, double markupPercentage);

int main(void)
{
	// Constant and Variable Declarations
	double wholesaleCost    = 0.0;
	double markupPercentage = 0.0;
	double retailPrice      = 0.0;


	// *** Your program goes here ***
	printf("Enter wholesale cost of an item: $");
	scanf("%lf", &wholesaleCost);
	printf("Enter the percent markup for the item: ");
	scanf("%lf", &markupPercentage);
	printf("\n");

	// *** PROCESSING ***
	//retailPrice = wholesaleCost * (1 + markupPercentage / 100);
	retailPrice = CalculateRetail(wholesaleCost, markupPercentage);

	// *** OUTPUT ***
	printf("The retail price of an item that has a wholesale cost of $%.2lf\n", wholesaleCost);
	printf("and a markup of %.2lf%% is $%.2lf.\n", markupPercentage, retailPrice);

	printf("\n");

	return 0;
} // end main()


// Retail Price Calculation Function
double CalculateRetail(double Cost, double markup) {
	// Local Variables
	double retailPrice   = 0.0;
	double markupDecimal = 0.0;
	double markupAmount  = 0.0;

	// Calculate the retail price of an item based on its
	// wholesale cost and the markup
	//retailPrice = wholesaleCost * (1 + markupPercentage / 100);

	markupDecimal = markup / 100;
	markupAmount  = Cost * markupDecimal;
	retailPrice   = Cost + markupAmount;

	return retailPrice;
} // end CalculateReatail function
