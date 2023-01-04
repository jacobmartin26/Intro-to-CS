// Programmer:		Your Name
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // For strcpy()

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUM = 1;
	const int MAX_NUM = 10;
	int numberEntered = 0;
	char romanNumeral[5] = ""; // Sized for VIII and null character

	// *** Your program goes here ***
	// *** INPUT ***
	printf("Enter a number from %d to %d inclusive: ", MIN_NUM, MAX_NUM);
	scanf("%d", &numberEntered);

	// Validation
	if (numberEntered >= MIN_NUM && numberEntered <= MAX_NUM) {
		// *** PROCESSING ***
		// Use strcpy() to store string in romanNumeral
		switch (numberEntered) {
		case 1: 
			strcpy(romanNumeral,  "I");
			break;
		case 2:
			strcpy(romanNumeral, "II");
			break;
		case 3:
			strcpy(romanNumeral, "III");
			break;
		case 4:
			strcpy(romanNumeral, "IV");
			break;
		case 5:
			strcpy(romanNumeral, "V");
			break;
		case 6:
			strcpy(romanNumeral, "VI");
			break;
		case 7:
			strcpy(romanNumeral, "VII");
			break;
		case 8:
			strcpy(romanNumeral, "VIII");
			break;
		case 9:
			strcpy(romanNumeral, "IX");
			break;
		case 10:
			strcpy(romanNumeral, "X");
			break;

		//default:
			//printf("An unexpected value was encountered.\n");
		}

		// *** OUTPUT ***
		//Display roman numeral
		printf("The number entered, %d, in Roman numerals is %s.\n", numberEntered, romanNumeral);
	}
	else {
		printf("The number entered, %d, is not in the range of %d to %d.\n", numberEntered, MIN_NUM, MAX_NUM);
	}

	printf("\n");
	return 0;
} // end main()
