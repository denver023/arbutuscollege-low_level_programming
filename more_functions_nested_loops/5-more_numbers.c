#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, 10 times,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Loop 10 times */
	{
		for (j = 0; j <= 14; j++) /* Loop through numbers from 0 to 14 */
		{
			if (j >= 10)
				_putchar('1'); /* Print the first digit of numbers 10 to 14 */
			_putchar(j % 10 + '0'); /* Print the second digit (0-9) */
		}
		_putchar('\n'); /* Print a newline after each row of numbers */
	}
}

