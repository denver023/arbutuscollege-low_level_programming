#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to the string
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		/* Print every other character */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	/* Print a new line */
	_putchar('\n');
}

