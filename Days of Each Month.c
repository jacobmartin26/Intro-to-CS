// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for strcpy()

int main(void)
{
	// Constant and Variable Declarations
	int numOfDays[13];
	char monthNames[13][10]; // [12] for number of months, [10] number of characters maximum (9) + 1 for \0
	int i = 1;


	// *** Your program goes here ***
	strcpy(monthNames[i], "January");	numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "February");	numOfDays[i] = 28;	i++;
	strcpy(monthNames[i], "March");		numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "April");		numOfDays[i] = 30;	i++;
	strcpy(monthNames[i], "May");		numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "June");		numOfDays[i] = 30;	i++;
	strcpy(monthNames[i], "July");		numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "August");	numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "September");	numOfDays[i] = 30;	i++;
	strcpy(monthNames[i], "October");	numOfDays[i] = 31;	i++;
	strcpy(monthNames[i], "November");	numOfDays[i] = 30;	i++;
	strcpy(monthNames[i], "December");	numOfDays[i] = 31;	i++;

	// Display the beginning line
	printf("Days of each month:\n");
	printf("-------------------\n");

	// Display the months and days
	for (i = 1; i < 13; i++) {
		printf("%s has %d days.\n", monthNames[i], numOfDays[i]);
	}

	printf("\n");

	return 0;
} // end main()
