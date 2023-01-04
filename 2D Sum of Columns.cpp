// Programmer:		Jacob Martin
// Date:			3/28/2021
// Program Name:	2D Sum of Columns
// Chapter:			Chapter 5 - Arrays
// Description:		This program populates and displays a 2D array with the number 1 - 100 with 10 numbers per row.
//                  Finally, the sum of the 4th and 9th column are displayed under the array.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int NUM_ROWS = 10;
	int NUM_COLS = 10; // Number of rows and columns displayed in the array
	int COLUMN_FOUR = 3;
	int COLUMN_NINE = 8; // Constants to target the columns to be summed
	int rows = 0;
	int cols = 0; // Counters for the loops
	int columnFourSum = 0;
	int columnNineSum = 0; // Holds sum values of the targeted columns
	int arrayValues[10][10]; // Holds the number of rows and columns
	int z = 0; // Calculates the numbers to be displayed in the array


	// *** Your program goes here ***

	printf("The contents of a 2-dimensional array, populated with the values 1 to 100...\n");

	for (rows = 0; rows < NUM_ROWS; rows++) { // Loops to calculate all the numbers in the array
		for (cols = 0; cols < NUM_COLS; cols++) {
			z = 10 * rows + (cols + 1); // Finds number to put in each [row][column]
			arrayValues[rows][cols] = z; // Places all numbers into array variable
			printf("%d\t", z); // Displays the array
		}
		printf("\n");
	}
	printf("\n");
	
	for (cols = 3; cols <= COLUMN_FOUR; cols++) { // Targets column four
		for (rows = 0; rows < NUM_ROWS; rows++) {
			columnFourSum = columnFourSum + arrayValues[rows][cols]; // Sum of the column
		}
	}

	for (cols = 8; cols <= COLUMN_NINE; cols++) { // Targets column nine
		for (rows = 0; rows < NUM_ROWS; rows++) {
			columnNineSum = columnNineSum + arrayValues[rows][cols]; // Sum of the column
		}
	}
	
	printf("The sum of the 4th column is %d.\n", columnFourSum);
	printf("The sum of the 9th column is %d.\n", columnNineSum); // Displays the sums


	return 0;
} // end main()
