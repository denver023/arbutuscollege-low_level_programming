#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * 
 * Return: the square root of the number, or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to calculate the square root recursively
 * @n: the number to find the square root of
 * @i: the current number being checked if its square is equal to n
 * 
 * Return: the square root if found, or -1 if no square root exists
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_helper(n, i + 1));
}

