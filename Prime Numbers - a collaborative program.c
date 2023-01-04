// Programmer:		Greylen Gatewood & Jacob Martin
// Date:			4/14/2021
// Program Name:	Prime Numbers - a collaborative program
// Chapter:			Chapter 6 - Functions
// Description:		In this program, a user will enter a number that is greater than 2.
//					This number will be passed to a function where all prime numbers between 2 and the user number will be found.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int IsPrime(int i) { // function receives loop counter (i) and checks if its prime
	int j = 1; // loop counter
	int trueFalse = 1; // decides if a condition is true or false
	for (j = 2; j <= i / 2; j++) { // loop to determine if a number is prime
		if (i % j == 0) { // if condition is true b/c % remainder is 0,
			trueFalse = 0; // then number is not prime (false)
			break; // exits and goes to next statement
		}
	}
	return trueFalse; // returns if number is true or false
}

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUM = 2; // minimum number in a range
	int userNum = 0; // number entered by user
	int trueFalse = 0; // decides if a condition is true or false
	int i = 0; // loop counter

	// *** Your program goes here ***
	printf("To see all the prime numbers up to 'X',\n");
	printf("enter 'X' (an integer greater than %d): ", MIN_NUM);
	scanf("%d", &userNum); // gets number from user
	printf("\n");

	while (userNum <= 2) { // validation
		printf("   The number entered, %d, is not greater than %d.\n", userNum, MIN_NUM);
		printf("   Please re-enter an integer greater than %d: ", MIN_NUM);
		scanf("%d", &userNum); // user re-enters number if <=2
	}

	for (i = MIN_NUM; i <= userNum; i++) { // loop starting from MIN_NUM that goes to userNum
		trueFalse = IsPrime(i); // checks each number in the desired range by passing it to the function
		if (trueFalse == 1) { // if true (1), displays the prime number
			printf("%d is a prime number.\n", i);
		}
	}

	printf("\n");
	return 0;
} // end main()
