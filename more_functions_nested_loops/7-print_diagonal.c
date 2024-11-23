#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)  /* If n is 0 or less, just print a newline */
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)  /* Loop n times */
	{
		for (j = 0; j < i; j++)  /* Print spaces before the '\' */
		{
			_putchar(' ');
		}
		_putchar('\\');  /* Print the diagonal character */
		_putchar('\n');  /* Move to the next line */
	}
}

