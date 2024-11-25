#include "main.h"
#include <stdio.h>

/**
 * main - tests the _atoi function
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    // Test with a simple positive integer
    nb = _atoi("98");
    printf("%d\n", nb);  // Expected: 98

    // Test with a simple negative integer
    nb = _atoi("-402");
    printf("%d\n", nb);  // Expected: -402

    // Test with a string containing multiple '+' and '-' signs before the number
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);  // Expected: -98 (ignores non-numeric characters)

    // Test with a string that represents a large number
    nb = _atoi("214748364");
    printf("%d\n", nb);  // Expected: 214748364

    // Test with a string that contains no number
    nb = _atoi("No number here!");
    printf("%d\n", nb);  // Expected: 0

    // Test with a string containing a number and other characters at the beginning
    nb = _atoi("Suite 402");
    printf("%d\n", nb);  // Expected: 402

    // Test with a complex string containing multiple signs and numbers
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);  // Expected: -98

    // Test with a string with a number embedded in other characters
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);  // Expected: 402

    return (0);
}

