#include "main.h"

/* Prototype for the helper function */
int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number whose square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
    return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root recursively
 * @n: The number whose square root is being calculated
 * @i: The current number to check if i * i == n
 *
 * Return: The square root of n, or -1 if no natural square root exists
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n) /* If i squared is greater than n, return -1 */
        return (-1);

    if (i * i == n) /* If i squared equals n, return i */
        return (i);

    return (_sqrt_helper(n, i + 1)); /* Recurse with i incremented */
}

