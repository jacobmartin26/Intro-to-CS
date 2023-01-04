// Programmer:		Jacob Martin
// Date:			3/14/2021
// Program Name:	Sales Commission
// Chapter:			Chapter 4 - Repetition
// Description:		This program asks for a weekly sales amount from the user.
//                  With this amount the amount received, total, and average sales are calculated with the 9% commission and the $200 salary.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const double WEEKLY_SALARY = 200.00; // Base amount received
	const double COMMISSION_AMOUNT = 0.09; // Commission rate of 9%
	double weeklySales = 0.0; // # entered by user
	double amountReceived = 0.0; // weeklySales * 9% + 200
	double totalSales = 0.0; // Total of all sales made
	double averageSales = 0.0; // Average of all sales made
	double amountAccumulator = 0.0; // Used to hold all sales amounts
	int loopCounter = 0; // Used to calculate # of sales people for average



	// *** Your program goes here ***

	weeklySales = 0.0;
	do {
		printf("Enter the amount of sales (-1 to quit): ");
		scanf("%lf", &weeklySales); // *** Input ***
		if (weeklySales < 0) {
			break; // Ends the loop if a negative is entered
		}
		amountReceived = (weeklySales * COMMISSION_AMOUNT) + WEEKLY_SALARY; // Finds how much the employee will make that week
		printf("The person receives $%.2lf.\n\n", amountReceived);
		loopCounter = loopCounter + 1; // Holds how many peolpe are being counted
		amountAccumulator = amountAccumulator + weeklySales; // Holds total of all sales made
	} while (weeklySales >= 0); // Loop condition

	printf("\n");

	totalSales = amountAccumulator; // Displays total sales. Setting equal to totalSales is redundant but makes following printf nicer imo
	printf("The total of the sales was $%.2lf.\n", totalSales); // Displays total sales

	averageSales = totalSales / loopCounter ; // Calculates average of all sales
	printf("The average sales was $%.2lf.", averageSales); // Displays average sales

	printf("\n");

	return 0;
} // end main()
