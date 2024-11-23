#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)  /* If size is 0 or less, print only a newline */
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)  /* Loop through rows */
	{
		for (j = 0; j < size; j++)  /* Loop through columns */
		{
			_putchar('#');  /* Print the square character */
		}
		_putchar('\n');  /* Move to the next line after printing a row */
	}
}

