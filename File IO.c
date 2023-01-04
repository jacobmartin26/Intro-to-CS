// Programmer:		Jacob Martin
// Date:			Date
// Program Name:	The name of the program
// Chapter:			Chapter # - Chapter name
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <stdlib.h>

int main(void)
{
	// Constant and Variable Declarations
	FILE* myFile = NULL; // file pointer
	char fileName[20] = ""; // char array, 20 characters
	int userNum = 0; // number entered by user
	int numValues = 0; // how many values were read
	int numRead = 0; // how many values per scanf
	int* myArray = (int*)malloc(numValues * sizeof(int)); // dynamic array to hold values read

	// *** Your program goes here ***
	// prompt for filename
	printf("Enter the name of the file you'd like to create: ");
	scanf("%s", fileName);
	printf("\n");

	// connect to file for writing
	printf("Opening %s for writing...\n", fileName);
	myFile = fopen(fileName, "w");

	if (myFile != NULL) {
		// Write to file
		// prompt for value to write to file
		printf("Enter a positive integer value (enter a negative to quit): ");
		scanf("%d", &userNum);
		while (userNum >= 0) {
			// write the value and a newline to the file
			fprintf(myFile, "%d\n", userNum);
			// feedback that the value was written
			printf("The value %d was written to %s.\n", userNum, fileName);
			printf("\n");
			// prompt for next value
			printf("Enter another positive integer value (enter a negative to quit): ");
			scanf("%d", &userNum);
		}
		// close the file
		printf("Closing %s...\n", fileName);
		fclose(myFile);
		printf("%s was writen successfully!\n\n\n", fileName);

		//reset file pointer to null
		myFile = NULL;
		// connect to file for reading
		printf("Opening %s for reading...\n", fileName);
		myFile = fopen(fileName, "r");

		// make sure the file was opened without error
		if (myFile != NULL) {
			while (!feof(myFile)) {
				// reading a value from the file
				numRead = fscanf(myFile, "%d", &userNum);
				if (numRead == 1) {
					// provides feedback that the value was read
					printf("The value read was %d.\n", userNum);
					numValues++; // increment for total number of values read
					// resize the dynamic array
					myArray = (int*)realloc(myArray, numValues * sizeof(int));
					// put the value read into the array
					myArray[numValues - 1] = userNum; // - 1 is used because the array is zero based

				}
			}
			// close the file
			printf("Closing the file...\n");
			fclose(myFile);
			printf("%s was read successfully!\n", fileName);

			printf("\n");

			// display how many values were read
			printf("%d values were read and stored in an array.\n", numValues);

			// display the contents of the array
			printf("The values in the array are:\n");
			for (int i = 0; i < numValues; i++) {
				printf("Value #%d = %d\n", i + 1, myArray[i]);
			}
		}
		else { // could not open for reading
			printf("Could not open %s for reading.\n", fileName);
		}
	}
	else { // could not open for writing
		printf("Could not open %s for writing.\n", fileName);
	}


	printf("\n");
	return 0;
} // end main()
