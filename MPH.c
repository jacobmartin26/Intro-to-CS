// Programmer:		Jacob Martin
// Date:			4/11/2021
// Program Name:	MPH
// Chapter:			Chapter 6 - Functions
// Description:		In this program, the user will enter in the number of miles driven and how many minutes it took to drive that distance.
//                  A function will then take those values and calculate the MPH.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

double CalculateMPH(double miles, double minutes) {
	double MPH;
	double minsToHours;
	minsToHours = minutes / 60;
	MPH = miles / minsToHours;
	return MPH;
}

int main(void)
{
	// Constant and Variable Declarations
	double userMiles   = 0.0;
	double userMinutes = 0.0;
	double MPH         = 0.0;

	// *** Your program goes here ***
	printf("Enter the number of miles driven: ");
	scanf("%lf", &userMiles);

	while (userMiles < 0) {
		printf("   The miles driven must be a positive number.\n");
		printf("   Please re-enter the number of miles driven: ");
		scanf("%lf", &userMiles);
	}

	printf("Enter the number of minutes that it took to drive the %.1lf miles: ", userMiles);
	scanf("%lf", &userMinutes);

	while (userMinutes < 0) {
		printf("   The minutes driven must be a positive number.\n");
		printf("   Please re-enter the number of minutes that it took to drive the %.1lf miles: ", userMiles);
		scanf("%lf", &userMinutes);
	}

	printf("\n");

	MPH = CalculateMPH(userMiles, userMinutes);

	printf("Based on a trip of %.1lf miles that took %.0lf minutes,\n", userMiles, userMinutes);
	printf("your speed was %.0lf MPH.", MPH);


	printf("\n");
	return 0;
} // end main()
