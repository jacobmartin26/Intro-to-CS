// Programmer:		Jacob Martin
// Date:			3/9/2021
// Program Name:	Histogram
// Chapter:			Chapter 4 - Repetition
// Description:		This program asks the user for a number between 1 and 40 and then displays that number in asterisks.
//					If the number is less than 1 the program ends, and if it's greater than 40 then the user must enter a smaller number.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 40;
	int i = 1;
	int userNum = 0;


	// *** Your program goes here ***
	// *** INPUT ***
	printf("Enter a non-zero positive number less than %d: ", MAX_NUMBER);
	scanf("%d", &userNum);

	if (userNum < MIN_NUMBER) {
		printf("\nBye...\n");
		exit(0);
	}
	for (i = 1; i <= userNum; ++i) {
		if (userNum > MAX_NUMBER) {
			printf("   The number entered was greater than %d.\n", MAX_NUMBER);
			printf("   Please re-enter: ");
			scanf("%d", &userNum);
		}
		else if (userNum >= MIN_NUMBER && userNum < MAX_NUMBER) {
			printf("*");
		}
	}
	printf(" %d", userNum);
	if (userNum < MIN_NUMBER) {
		printf("\nBye...\n");
		exit(0);
	}
	printf("\n\n");

	while (userNum >= MIN_NUMBER) {
		if (userNum >= MIN_NUMBER) {
			printf("Enter another non-zero positive number less than %d: ", MAX_NUMBER);
			scanf("%d", &userNum);
		}
		if (userNum < MIN_NUMBER) {
			printf("\nBye...\n");
			exit(0);
		}
			for (i = 1; i <= userNum; ++i) {
				if (userNum > MAX_NUMBER) {
					printf("   The number entered was greater than %d.\n", MAX_NUMBER);
					printf("   Please re-enter: ");
					scanf("%d", &userNum);
				}
				else if (userNum >= MIN_NUMBER && userNum < MAX_NUMBER) {
					printf("*");
				}
			}
			printf(" %d", userNum);
			printf("\n\n");
		}
			printf("\n\n");

	return 0;
} // end main()
