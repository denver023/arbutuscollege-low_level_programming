#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* Find the length of the string */
	while (s[end] != '\0')
	{
		end++;
	}
	end--; /* Move back to the last valid character */

	/* Reverse the string */
	while (start < end)
	{
		/* Swap the characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the pointers toward the middle */
		start++;
		end--;
	}
}

