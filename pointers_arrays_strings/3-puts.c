#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* Loop until the null character */
	{
		_putchar(str[i]); /* Use _putchar to print each character */
		i++;
	}
	_putchar('\n'); /* Print a newline after the string */
}

