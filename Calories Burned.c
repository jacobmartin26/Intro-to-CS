// Programmer:		Jacob Martin
// Date:			3/11/2021
// Program Name:	Calories Burned
// Chapter:			Chapter 4 - Repetition
// Description:		This program contains no inputs and displays how many calories you burn at certain time intervals.
//                  It starts at 10 and increments by five to 30 and uses the 3 different loops to display the information.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const double CAL_PER_MIN = 3.90;
	const int STARTING_TIME = 10;
	const int ENDING_TIME = 30;
	const int TIME_INCREMENT = 5;
	double caloriesBurned = 0;
	int i = 10;


	// *** Your program goes here ***
	// *** OUTPUT ***
	printf("You burn %.2lf calories every minute you run.\n", CAL_PER_MIN);
	printf("This shows how many calories you burn if you ran for %d to %d minutes.\n\n", STARTING_TIME, ENDING_TIME);

	printf("        Minutes  Calories\n");
	printf("        -------  --------\n");
	printf("Using a while loop\n");
	while (i <= ENDING_TIME) {
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
		i = i + TIME_INCREMENT;
	}
	printf("\n");

	printf("Using a do-while loop\n");
	i = STARTING_TIME;
	do {
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
		i = i + TIME_INCREMENT;
	} while (i <= ENDING_TIME);
	printf("\n");

	printf("Using a for loop\n");
	for (i = STARTING_TIME; i <= ENDING_TIME; i = i + TIME_INCREMENT) {
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
	}
	printf("\n");

	return 0;
} // end main()
