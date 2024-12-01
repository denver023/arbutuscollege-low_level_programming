#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of the number or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Negative numbers don't have square roots */
		return (-1);

	return (_sqrt_helper(n, 1));  /* Start with 1 and check for square root */
}

/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of the number or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)  /* If i squared is greater than n, no square root exists */
		return (-1);

	if (i * i == n)  /* If i squared equals n, we've found the square root */
		return (i);

	return (_sqrt_helper(n, i + 1));  /* Try the next guess */
}

