#include "main.h"

/**
 * main - Prints numbers from 1 to 100, but for multiples of 3 print Fizz,
 *       for multiples of 5 print Buzz, and for multiples of both 3 and 5
 *       print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 3 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 5 == 0)
        {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else
        {
            _putchar(i / 10 + '0');
            _putchar(i % 10 + '0');
        }

        if (i != 100)
        {
            _putchar(' ');
        }
    }
    _putchar('\n');
    return (0);
}

