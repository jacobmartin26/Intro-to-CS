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
	int START_TEMP = 0;
	int END_TEMP = 0;
	int centTemp = START_TEMP;
	double fahrTemp = 0.0; //Initializations

	// *** Your program goes here ***
	printf("Enter the starting temperature: ");
	scanf("%d", &START_TEMP);
	//Validate

	printf("Enter the ending temperature: ");
	scanf("%d", &END_TEMP);
	//Validate

	if (START_TEMP > END_TEMP) {
		printf("Enter a starting temperature that is smaller than the ending temperature.\n");
		exit(0);
	}
	//2nd validation

	printf("\n");

	//centTemp = START_TEMP; //Initialization

	//Display the header
	printf("Centigrade\tFahrenheit\n");

	for (centTemp = START_TEMP; centTemp <= END_TEMP; centTemp++) { //Condition
		//Calculate fahrenheit temperature
		fahrTemp = ((double)9 / 5) * centTemp + 32;
		//Displays the table
		printf("%d\t\t%.1lf\n", centTemp, fahrTemp);
		//centTemp++; //Modify the loop variable
	}

	printf("\n");
	return 0;
} // end main()
