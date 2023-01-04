// Programmer: Grey Gatewood & Jacob Martin
// Date: 3/29/2021
// Program Name: Rainfall Stats - a collaborative program
// Chapter: Chapter 5 - Arrays
// Description: In this program a user enters 12 rainfall values into an array which are placed with their corresponding months (ex: value 1 goes with Jan).
//                  The total, average, lowest, and highest rainfall values are then displayed.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>

int main(void)
{
	// Constant and Variable Declarations
	double rainfallValues[12]; // Array to hold rainfall each month
	const char MONTH_NAMES[12][4] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", // Constant array to hold month names
	 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	double totalRain = 0.0; // Holds total rain value
	double averageRain = 0.0; // Holds avg rain
	double lowestRain = 0.0; // Holds lowest rain
	double highestRain = 0.0; // Holds highest rain
	int i = 0;   // Loop counter
	int currentVal = 0;   // Counter to find highest and lowest values
	int lowestMonth = 0;   // keeps track of the index of month with highest amount of rain
	int highestMonth = 0;   // keeps track of the index of the month with the lowest amount of rain

	// *** Your program goes here ***
	for (i = 0; i < 12; i++) { // Loop that user enters values into
		printf("Enter the rainfall (in inches) for %s: ", MONTH_NAMES[i]);
		scanf("%lf", &rainfallValues[i]);
	}

	printf("\n");

	printf("The rainfall that was entered was:\n");

	for (i = 0; i < 6; i++) {
		printf("%s\t", MONTH_NAMES[i]); // Prints row of first 6 months
	}

	printf("\n");

	for (i = 0; i < 6; i++) {
		printf("%.1lf\t", rainfallValues[i]); // Prints row of first 6 values
	}

	printf("\n\n");

	for (i = 6; i < 12; i++) {
		printf("%s\t", MONTH_NAMES[i]); // Prints row of last 6 months
	}

	printf("\n");

	for (i = 6; i < 12; i++) {
		printf("%.1lf\t", rainfallValues[i]); // Prints row of last 6 values
	}

	printf("\n");

	for (i = 0; i < 12; i++) {
		totalRain = totalRain + rainfallValues[i]; // Calculates total rain in the year
		averageRain = totalRain / 12; // Uses total rain to find average rain
	}

	lowestRain = rainfallValues[0]; // Sets base value for lowest rain
	highestRain = rainfallValues[0]; // Sets base value for highest rain

	for (currentVal = 1; currentVal < 12; currentVal++) { // Loop using currentVal counter to find highest and lowest rain
		if (rainfallValues[currentVal] < lowestRain) {
			lowestRain = rainfallValues[currentVal]; // If to find lowest
			lowestMonth = currentVal;
		}
		if (rainfallValues[currentVal] > highestRain) {
			highestRain = rainfallValues[currentVal]; // If to find highest
			highestMonth = currentVal;
		}
	}

	printf("\n");

	printf("The total rain that fell was %.1lf inches.\n", totalRain); // Displays total
	printf("The average monthly rainfall was %.1lf inches.\n", averageRain); // Displays average
	printf("The lowest monthly rainfall was %.1lf inches in %s\n", lowestRain, MONTH_NAMES[lowestMonth]); // Displays lowest and its month
	printf("The highest monthly rainfall was %.1lf inches in %s\n", highestRain, MONTH_NAMES[highestMonth]); // Displays highest and its month

	return 0;
} // end main()