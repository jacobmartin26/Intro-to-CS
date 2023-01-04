// Programmer:		Jacob Martin
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
	const char FAT_WORD[]     = "fat";
	const char CARB_WORD[]    = "carbohydrate";
	const char PROTEIN_WORD[] = "protein";
	const int CALS_PER_FAT     = 9;
	const int CALS_PER_CARB    = 4;
	const int CALS_PER_PROTEIN = 4;
	int fatGrams     = 0;
	int carbGrams    = 0;
	int proteinGrams = 0;
	int fatCals     = 0;
	int carbCals    = 0;
	int proteinCals = 0;

	// *** Your program goes here ***
	// *** INPUT ***
	// Get the number of fat grams
	GetPosInt(FAT_WORD, &fatGrams);
	GetPosInt(CARB_WORD, &carbGrams);
	GetPosInt(PROTEIN_WORD, &proteinGrams);

    // *** PROCESSING ***
	fatCals     = CalcCals(fatGrams, CALS_PER_FAT);
	carbCals    = CalcCals(carbGrams, CALS_PER_CARB);
	proteinCals = CalcCals(proteinGrams, CALS_PER_PROTEIN);

	// *** OUTPUT ***
	OutputCal(FAT_WORD, fatGrams, fatCals);
	OutputCal(CARB_WORD, carbGrams, carbCals);
	OutputCal(PROTEIN_WORD, proteinGrams, proteinCals);
	//OutputFinal(fatCals + carbCals + proteinCals);

	printf("\n");
	return 0;
} // end main()


// Calories Calculation function
// Value-returning function should not get input
// All needed data should be passed to the function
// and should not display output.
// The answer should be returned to main for the output
int CalcCals(int numGrams, int calsPerGram) {
	// Calculate and return the number of calories based on the grams passed
	return numGrams * calsPerGram;
} // end CalcCals function

  // Get a positive integer (with validation)
void GetPosInt(char promptText[], int* myPosInt) { // Get a positive integer (using pass by pointer)
	printf("Enter the number of %s grams in your meal: ", promptText);
	scanf("%d", &*myPosInt);

	// Validate the number is positive
	while (*myPosInt < 0) {
		printf("   A positive number was not entered\n");
		printf("   Enter the number of %s grams in your meal: ", promptText);
		scanf("%d", &*myPosInt);
	}

	return; // void functions return nothing - return is not even needed
} // end GetPosInt function


// Calorie output function
void OutputCal(const char TYPE_NAME[], int typeGrams, int typeCals) { // Display the number of calories (and some extra text) in so many grams of the type passed
	printf("The number of calories from the %d %s gram", typeGrams, TYPE_NAME);
	if (typeGrams != 1) printf("s"); // Singular/plural decision
	printf(" consumed is %d calories.\n", typeCals);

	return; // returns nothing - return not needed
} // end OutputCal function