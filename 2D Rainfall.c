// Programmer:		Jacob Martin
// Date:			3/30/2021
// Program Name:	2D Rainfall
// Chapter:			Chapter 5 - Arrays
// Description:		This program holds and displays each rainfall value per month over a period of 5 years.
//                  The values in the array are used to find and displays the total rain per year and the average rain per month.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>

int main(void)
{
	// Constant and Variable Declarations
	double rainfallPerMonth[5][12] = {
		{0.88, 1.11, 2.01, 3.64, 6.44, 5.58, 4.23, 4.34, 4.00, 2.05, 1.48, 0.77},
		{0.76, 0.94, 2.09, 3.29, 4.68, 3.52, 3.52, 4.82, 3.72, 2.21, 1.24, 0.80},
		{0.67, 0.80, 1.75, 2.70, 4.01, 3.88, 3.72, 3.78, 3.55, 1.88, 1.21, 0.61},
		{0.82, 0.80, 1.99, 3.05, 4.19, 4.44, 3.98, 4.57, 3.43, 2.32, 1.61, 0.75},
		{0.72, 0.90, 1.71, 2.02, 2.33, 2.98, 2.65, 2.99, 2.55, 1.99, 1.05, 0.92} // all of the rain values
	};
	double monthlyTotal[12]; // used to find monthly average
	double monthlyAverage[12]; // average rain per month
	double totalRain[5]; // total rain per year
	int row = 0; // counter for row #
	int col = 0; // counter for column #
	int i   = 0; // counter for anything else
	int currentYear[5] = { 2010, 2011, 2012, 2013, 2014 }; // range of years
	char currentMonth[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }; // all month names

	// *** Your program goes here ***

	printf("\t");

	for (i = 0; i < 12; i++) {
		printf(" %s\t", currentMonth[i]); // displays a header of all the month names
	}

	printf("\n");

	for (row = 0; row < 5; row++) {
		printf("%d\t", currentYear[row]); // displays column of years
		for (col = 0; col < 12; col++) {
			printf("%.2lf\t", rainfallPerMonth[row][col]); // displays array of all rainfall values
		}
		printf("\n");
	}

	printf("\nTotal rainfall for each year:\n");

	totalRain[0] = 0.0;
	for (row = 0; row < 1; row++) {
		for (col = 0; col < 12; col++) {
			totalRain[0] = totalRain[0] + rainfallPerMonth[row][col]; // calculates total rain in 2010
		}
	}
	printf("%d\t%.2lf\n", currentYear[0], totalRain[0]); // displays 2010 and the total rain for that year

	totalRain[1] = 0.0;
	for (row = 1; row < 2; row++) {
		for (col = 0; col < 12; col++) {
			totalRain[1] = totalRain[1] + rainfallPerMonth[row][col]; // total rain for 2011
		}
	}
	printf("%d\t%.2lf\n", currentYear[1], totalRain[1]); // displays 2011 and the total rain for that year

	totalRain[2] = 0.0;
	for (row = 2; row < 3; row++) {
		for (col = 0; col < 12; col++) {
			totalRain[2] = totalRain[2] + rainfallPerMonth[row][col]; // 2012
		}
	}
	printf("%d\t%.2lf\n", currentYear[2], totalRain[2]); // displays year and total

	totalRain[3] = 0.0;
	for (row = 3; row < 4; row++) {
		for (col = 0; col < 12; col++) {
			totalRain[3] = totalRain[3] + rainfallPerMonth[row][col]; // 2013
		}
	}
	printf("%d\t%.2lf\n", currentYear[3], totalRain[3]); // displays year and total

	totalRain[4] = 0.0;
	for (row = 4; row < 5; row++) {
		for (col = 0; col < 12; col++) {
			totalRain[4] = totalRain[4] + rainfallPerMonth[row][col]; // 2014
		}
	}
	printf("%d\t%.2lf\n", currentYear[4], totalRain[4]); // displays year and total

	printf("\n");

	monthlyTotal[0] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[0] = monthlyTotal[0] + rainfallPerMonth[row][0]; // calculates monthly total of Jan across five years
	}
	monthlyAverage[0] = monthlyTotal[0] / 5; // uses total to find average of Jan

	monthlyTotal[1] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[1] = monthlyTotal[1] + rainfallPerMonth[row][1]; // total of Feb
	}
	monthlyAverage[1] = monthlyTotal[1] / 5; // average of feb

	monthlyTotal[2] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[2] = monthlyTotal[2] + rainfallPerMonth[row][2]; // total of Mar
	}
	monthlyAverage[2] = monthlyTotal[2] / 5; // average of Mar

	monthlyTotal[3] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[3] = monthlyTotal[3] + rainfallPerMonth[row][3]; // Apr
	}
	monthlyAverage[3] = monthlyTotal[3] / 5; // Apr

	monthlyTotal[4] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[4] = monthlyTotal[4] + rainfallPerMonth[row][4]; // May
	}
	monthlyAverage[4] = monthlyTotal[4] / 5; // May

	monthlyTotal[5] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[5] = monthlyTotal[5] + rainfallPerMonth[row][5]; // Jun
	}
	monthlyAverage[5] = monthlyTotal[5] / 5; // Jun

	monthlyTotal[6] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[6] = monthlyTotal[6] + rainfallPerMonth[row][6]; // Jul
	}
	monthlyAverage[6] = monthlyTotal[6] / 5; // Jul

	monthlyTotal[7] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[7] = monthlyTotal[7] + rainfallPerMonth[row][7]; // Aug
	}
	monthlyAverage[7] = monthlyTotal[7] / 5; //Aug

	monthlyTotal[8] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[8] = monthlyTotal[8] + rainfallPerMonth[row][8]; // Sep
	}
	monthlyAverage[8] = monthlyTotal[8] / 5; // Sep

	monthlyTotal[9] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[9] = monthlyTotal[9] + rainfallPerMonth[row][9]; // Oct
	}
	monthlyAverage[9] = monthlyTotal[9] / 5; // Oct

	monthlyTotal[10] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[10] = monthlyTotal[10] + rainfallPerMonth[row][10]; // Nov
	}
	monthlyAverage[10] = monthlyTotal[10] / 5; // Nov

	monthlyTotal[11] = 0.0;
	for (row = 0; row < 5; row++) {
		monthlyTotal[11] = monthlyTotal[11] + rainfallPerMonth[row][11]; // Dec
	}
	monthlyAverage[11] = monthlyTotal[11] / 5; // Dec

	printf("Average rainfall for each month:\n");

	for (i = 0; i < 12; i++) {
		printf(" %s\t", currentMonth[i]); // displays header of all the months
	}

	printf("\n");

	for (i = 0; i < 12; i++) {
		printf("%.2lf\t", monthlyAverage[i]); // displays each month's average across five years
	}

	printf("\n");

	return 0;
} // end main()
