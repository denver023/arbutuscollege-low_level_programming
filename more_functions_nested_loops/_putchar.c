#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success, returns the number of characters written (1).
 * On error, returns -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

