#include <stdio.h>
#include <stdlib.h>
#include "reader.h" // Contains readIntReturn();

int main(void) {

	int 	*array = malloc(sizeof(int)),
			elementCount = 0,
			input;

	printf("Creates a dynamic array. To exit, give number -1.\n");

	while (1) {
		// Ask for a number
		printf("Give me a number: ");
		input = readIntReturn();

		// Break condition
		if (input == -1)
			break;

		if (array) {
			// Add new elements
			array[elementCount] = input;
			elementCount++;
			// Add more space
			array = (int *)realloc(array, sizeof(int) * (elementCount + 1));

			// Inform user
			printf(" -> recorded array[%d] = %d\n", elementCount-1, array[elementCount-1]);
		} else {
			// We can't add new elements, exit
			break;
		}
	}

	// Free up memory
	array = realloc(array, 0);
	
	// Say bye
	printf("\nThanks, bye!\n");

	return 0;
}
