#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0); /* Test case 1: 0 (should print just a newline) */
    print_diagonal(2); /* Test case 2: 2 (should print a diagonal of length 2) */
    print_diagonal(10); /* Test case 3: 10 (should print a diagonal of length 10) */
    print_diagonal(-4); /* Test case 4: -4 (should print just a newline) */
    return (0);
}

