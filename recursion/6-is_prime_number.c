#include "main.h"

/* Prototype for the helper function */
int check_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the number is prime, otherwise 0
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1) /* Numbers less than or equal to 1 are not prime */
        return (0);

    return (check_prime(n, 2)); /* Call the helper function to check primality */
}

/**
 * check_prime - Helper function to check if n is divisible by any number i
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 if n is divisible by i (i.e., not prime)
 */
int check_prime(int n, int i)
{
    if (i * i > n) /* If i squared exceeds n, n is prime */
        return (1);

    if (n % i == 0) /* If n is divisible by i, then it's not prime */
        return (0);

    return (check_prime(n, i + 1)); /* Recurse with the next divisor */
}

