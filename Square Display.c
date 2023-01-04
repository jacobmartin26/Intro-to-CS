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
	const int MIN_NUM = 1;
	const int MAX_NUM = 15;
	const char DISPLAY_CHARACTER = 'X';
	int userNum = 0;


	// *** Your program goes here ***
	// *** INPUT ***
	// Get number
	printf("Enter number between %d and %d: ", MIN_NUM, MAX_NUM);
	scanf("%d", &userNum);

	while (userNum < MIN_NUM || userNum > MAX_NUM) { // Validation
		printf("Number entered, %d, is not in range.\n", userNum);
		printf("Re-enter your number: ");
		scanf("%d", &userNum);
	}
	printf("\n");

	// *** PROCESSING ***
	for (int rowNum = MIN_NUM; rowNum <= userNum; rowNum++) { // Outer loop for rows
		for (int colNum = MIN_NUM; colNum <= userNum; colNum++) { // Inner loop for columns
			// *** OUTPUT ***
			printf("%c ", DISPLAY_CHARACTER);
		} // End of inner
		printf("\n"); // New line for next row
	} // End of outer

	printf("\n");


	return 0;
} // end main()
