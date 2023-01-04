// Programmer:		Jacob Martin
// Date:			2/23/2021
// Program Name:	Minutes, Hours, Days
// Chapter:			Chapter 3 - Decisions
// Description:		This program asks for and receives a number of seconds from the user.
//                  Depending on the number entered, the seconds will be converted to an amount of minutes, hours, and days.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userSeconds = 0; // Number entered
	double secondsToMins = 0.0;
	double secondsToHours = 0.0;
	double secondsToDays = 0.0; // Displays totals after conversion
	const double SECONDS_IN_MIN = 60.0;
	const double SECONDS_IN_HOUR = 3600.0;
	const double SECONDS_IN_DAY = 86400.0; // Conversion factors
	const int MINIMUM_SECONDS = 1; // Minimum amount that can be entered without an "error" occurring

	// *** Your program goes here ***
	// *** INPUT ***
	printf("Enter the number of seconds: "); // Prompts for seconds
	scanf("%d", &userSeconds); // User enters integer
	printf("\n");

	// *** PROCESSING AND OUTPUT ***
	if (userSeconds < MINIMUM_SECONDS) {
		printf("The number of seconds entered must be greater than 0."); // "Error" message to inform user to try again
		printf("\n");
	}
	if ((userSeconds < SECONDS_IN_MIN) && (userSeconds > MINIMUM_SECONDS)) {
		printf("The number of seconds you entered, %d, is less than one minute but greater than zero seconds.", userSeconds); // Number is less than 60 so no conversion occurs, but is greater than zero so it's not an error either
		printf("\n");
	}
	else if (userSeconds >= SECONDS_IN_MIN) {
		secondsToMins = userSeconds / SECONDS_IN_MIN; // Converts seconds to minutes
		printf("The number of seconds you entered, %d, is %.2lf minutes.", userSeconds, secondsToMins); // Displays conversion
		printf("\n");
	}
	if (userSeconds >= SECONDS_IN_HOUR) {
		secondsToHours = userSeconds / SECONDS_IN_HOUR; // Converts seconds to hours
		printf("The number of seconds you entered, %d, is %.2lf hours.", userSeconds, secondsToHours); // Displays conversion
		printf("\n");
	}
	if (userSeconds >= SECONDS_IN_DAY) {
		secondsToDays = userSeconds / SECONDS_IN_DAY; // Converts seconds to days
		printf("The number of seconds you entered, %d, is %.2lf days.", userSeconds, secondsToDays); // Displays conversion
		printf("\n");
	}

	return 0;
} // end main()
