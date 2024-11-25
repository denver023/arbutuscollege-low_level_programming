#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s); /* Print the original string */
    rev_string(s);     /* Call rev_string to reverse the string */
    printf("%s\n", s); /* Print the reversed string */
    return (0);
}

