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
	int numberOfShares = 0;
	double amountPerShare = 0;
	double moneyNeeded = 0.0;


	// *** Your program goes here ***
	// *** INPUTS ***
	printf("Enter the number of shares of stock: ");
	scanf("%d", &numberOfShares); // Receives number of shares
	printf("\n"); // blank line

	printf("Enter the dollar amount per share: $");
	scanf("%lf", &amountPerShare); // Receives cost of a share
	printf("\n"); // blank line

	// *** OUTPUTS ***
	moneyNeeded = numberOfShares * amountPerShare; // Calculates how much money is needed in total
	printf("The amount of money needed to purchase %d shares of stock at $%.2lf is $%.2lf.", numberOfShares, amountPerShare, moneyNeeded); // Displays how much money is needed for x amount of a stock
	printf("\n"); // blank line

	return 0;
} // end main()
