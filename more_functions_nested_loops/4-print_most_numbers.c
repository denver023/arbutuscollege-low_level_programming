#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4,
 * followed by a new line.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++) /* Iterate through '0' to '9' */
	{
		if (c != '2' && c != '4') /* Skip 2 and 4 */
			_putchar(c);
	}
	_putchar('\n'); /* Print a newline */
}

