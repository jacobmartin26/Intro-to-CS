// Programmer:		Jacob Martin
// Date:			2/11/2021
// Program Name:	How Many
// Chapter:			Chapter 2 - Fundamentals
// Description:		In this program, a fast food menu is displayed along with each item's corresponding prices.
//					The user enters an amount of money and is then shown how much of each item they could afford.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userMoney = 0.0; // Amount of money user has
	const double DOG_PRICE = 1.50;
	const double BURGER_PRICE = 3.00;
	const double CHICKEN_PRICE = 2.75; // Prices
	int amountOfDogs = 0;
	int amountOfBurgers = 0;
	int amountOfChicken = 0; // Amount of items user can afford

	// *** Your program goes here ***
	// *** INPUT ***
	printf("        Fast Food\n");
	printf("-------------------------\n");
	printf("Hot Dog w/ Chili....$1.50\n");
	printf("Hamburger...........$3.00\n");
	printf("Chicken Sandwich....$2.75\n"); // Menu display
	printf("\n"); // Blank line
	printf("How much money do you have? $");
	scanf("%lf", &userMoney); // Gets amount of money from user

	// *** PROCESSING ***
	amountOfDogs = userMoney / DOG_PRICE; // Calculates amount of hot dogs the user can afford
	amountOfBurgers = userMoney / BURGER_PRICE; // Calculates the amount of burgers the user could afford
	amountOfChicken = userMoney / CHICKEN_PRICE; // Calculates the amount of chicken the user could afford

	// *** OUTPUT ***
	printf("\n"); // Blank line
	printf("With $%.2lf, you could buy\n", userMoney);
	printf("  %d Hot Dogs w/ Chili, or\n", amountOfDogs);
	printf("  %d Hamburgers, or\n", amountOfBurgers);
	printf("  %d Chicken Sandwiches\n", amountOfChicken); // Displays how much of each item the user could afford
	printf("\n"); // Blank line

	return 0;
} // end main()

// Not sure why there's so many errors, but it still worked fine for me regardless so I'm not sure what to fix :/