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
	int userNum1 = 0;
	int userNum2 = 0;
	int smallerNum = 0;
	int largerNum = 0;


	// *** Your program goes here ***
	// *** INPUT ***
	// Prompt and get the 2 numbers
	printf("Enter an integer: ");
	scanf("%d", &userNum1);
	printf("Enter another integer: ");
	scanf("%d", &userNum2);
	printf("\n");

	// *** PROCESSING ***
	if (userNum1 < userNum2) {
		smallerNum = userNum1;
		largerNum = userNum2;
	}
	else {
		smallerNum = userNum2;
		largerNum = userNum1;
	}

	// *** OUTPUT ***
	if (userNum1 != userNum2) {
		printf("%d is the smaller number, %d is the larger number.\n", smallerNum, largerNum);
	}
	else {
		printf("The 2 numbers, %d and %d, are equal.\n", userNum1, userNum2);
	}
	


	return 0;
} // end main()
