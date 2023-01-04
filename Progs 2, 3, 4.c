// Programmer:		Jacob Martin
// Date:			4/18/2021
// Program Name:	Progs 2, 3, 4
// Chapter:			Chapter 6 - Functions
// Description:		This program uses a series of functions to allow the user to run a program from chapter 2, 3, or 4.
//                  A menu displays before and after a choice until "-1" is entered which then ends the program.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int MenuOfChoices() { // function to display the menu
	int userChoice = 0;
	printf("   Progs 2, 3, 4 Menu\n");
	printf("------------------------\n");
	printf("2 - Split Double\n");
	printf("3 - Minutes, Hours, Days\n");
	printf("4 - Calories Burned\n\n");
	printf("Enter a choice (-1 to quit): ");
	scanf("%d", &userChoice); // gets a menu choice from user
	return userChoice; // returns the choice to be used
}

void SplitDouble() { // split double function
	double userNum;
	double decimalNum;
	double integerNum;

	printf("\nEnter a number that includes a decimal point: ");
	scanf("%lf", &userNum); // gets a number from user

	decimalNum = userNum - (int)userNum; // calculates decimal part
	integerNum = userNum - decimalNum; // calculates integer part

	printf("The integer part of %lf is %.0lf.\n", userNum, integerNum);
	printf("The decimal part of %lf is %lf.\n", userNum, decimalNum);
	printf("\n\n");

	return; // end of function, nothing returned
}

void MinsHoursDays() { // minutes, hours, days function
	int userSeconds = 0; // Number entered
	double secondsToMins = 0.0;
	double secondsToHours = 0.0;
	double secondsToDays = 0.0; // Displays totals after conversion
	const double SECONDS_IN_MIN = 60.0;
	const double SECONDS_IN_HOUR = 3600.0;
	const double SECONDS_IN_DAY = 86400.0; // Conversion factors
	const int MINIMUM_SECONDS = 1; // Minimum amount that can be entered without an "error" occurring

	printf("\nEnter the number of seconds: ");
	scanf("%d", &userSeconds);
	printf("\n");

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
	printf("\n\n");
	return; // end of function, nothing returned
}

void CaloriesBurned() { // calories burned function
	const double CAL_PER_MIN = 3.90; // calories burned per min running
	const int STARTING_TIME = 10; // bottom range of time running
	const int ENDING_TIME = 30; // top range of time running
	const int TIME_INCREMENT = 5; // increment for loop
	double caloriesBurned = 0; // calories you burn
	int i = 10; // loop counter

	printf("\nYou burn %.1lf calories every minute you run.\n", CAL_PER_MIN);
	printf("This shows how many calories you burn if you ran for %d to %d minutes.\n\n", STARTING_TIME, ENDING_TIME);

	printf("        Minutes  Calories\n");
	printf("        -------  --------\n");
	printf("Using a while loop\n");
	while (i <= ENDING_TIME) { // while loop to display cals burned
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
		i = i + TIME_INCREMENT;
	}
	printf("\n");

	printf("Using a do-while loop\n");
	i = STARTING_TIME;
	do { // do while loop
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
		i = i + TIME_INCREMENT;
	} while (i <= ENDING_TIME);
	printf("\n");

	printf("Using a for loop\n");
	for (i = STARTING_TIME; i <= ENDING_TIME; i = i + TIME_INCREMENT) { // for loop
		caloriesBurned = CAL_PER_MIN * i;
		printf("           %d       %.2lf\n", i, caloriesBurned);
	}
	printf("\n\n");
	return; // end of function, nothing returned
}

int main(void)
{
	// Constant and Variable Declarations
	int userChoice = 0; // holds choice of user

	// *** Your program goes here ***
	userChoice = MenuOfChoices(); // takes the returned value from Menu function

	while (userChoice != -1) { // loops until -1 is entered
		switch (userChoice) { // switch to decide what program to display
		case 2:
			SplitDouble(); // displays SplitDouble function
			break;

		case 3:
			MinsHoursDays(); // displays MinsHoursDays function
			break;

		case 4:
			CaloriesBurned(); // displays CaloriesBurned
			break;

		default:
			printf("\n\n"); // if number isn't 2, 3, 4, or -1 then nothing happens. "\n" for spacing purposes
			break;
		}
		userChoice = MenuOfChoices(); // takes the newly entered vcalue from Menu function
	}

	if (userChoice == -1) { // ends the program if -1 is entered
		printf("Good bye!");
	}
	
	printf("\n");
	return 0;
} // end main()
