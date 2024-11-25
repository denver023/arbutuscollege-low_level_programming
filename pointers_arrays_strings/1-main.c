#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);  /* Print the initial values */
    swap_int(&a, &b);             /* Call the function to swap values */
    printf("a=%d, b=%d\n", a, b);  /* Print the swapped values */
    return (0);
}

