#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
int temp;

	temp = *a; /* Store the value of the first integer in a temporary variable */
	*a = *b;   /* Assign the value of the second integer to the first integer */
	*b = temp; /* Assign the value of the temporary variable to the second integer */
}

