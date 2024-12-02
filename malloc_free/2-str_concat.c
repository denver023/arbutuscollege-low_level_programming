#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated space in memory containing
 *         the concatenated string, or NULL if the function fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}

	/* Allocate memory for the concatenated string (+1 for null terminator) */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy the contents of s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the contents of s2 into concat */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Add the null terminator */
	concat[i + j] = '\0';

	return (concat);
}

