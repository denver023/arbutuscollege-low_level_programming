#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 *         -1 if y is less than 0 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Error case: negative exponent */
		return (-1);

	if (y == 0) /* Base case: x^0 is 1 */
		return (1);

	return (x * _pow_recursion(x, y - 1)); /* Recursive step */
}

