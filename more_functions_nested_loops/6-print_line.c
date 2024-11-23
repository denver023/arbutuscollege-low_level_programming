#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');  /* Print only a newline if n is 0 or negative */
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');  /* Print _ n times */
        }
        _putchar('\n');  /* Print newline at the end */
    }
}

