// Programmer:		Caleb Childers Jacob Martin
// Date:			2/10/2021
// Program Name:	Split Double
// Chapter:			Chapter 2 - fundamentals
// Description:		This program gets a number with a decimal from the user.
//					The program then displays the number with the interger side and decimal side seperated.
//					

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userNum;
	double decimalNum;
	double integerNum;


	// *** Your program goes here ***
	//input
	printf("Enter a number that includes a decimal point: ");
	scanf("%lf", &userNum);
	printf("\n");

	//processing
	decimalNum = userNum - (int)userNum;
	integerNum = userNum - decimalNum;

	//ouptut
	printf("The integer part of %lf is %.0lf\n", userNum, integerNum);
	printf("The decimal part of %lf is %lf.\n", userNum, decimalNum);
	printf("\n");

	return 0;
} // end main()