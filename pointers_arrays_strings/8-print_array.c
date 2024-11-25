#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)  /* Check if it's not the last element */
        {
            printf(", ");  /* Print comma and space for all but the last element */
        }
    }
    printf("\n");  /* Print a new line after the array */
}

