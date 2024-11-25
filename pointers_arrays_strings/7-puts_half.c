#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting index for the second half */
	if (len % 2 == 0)
	{
		start = len / 2;  /* For even length, start from the middle */
	}
	else
	{
		start = (len + 1) / 2;  /* For odd length, start from the next middle character */
	}

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	/* Print a new line */
	_putchar('\n');
}

