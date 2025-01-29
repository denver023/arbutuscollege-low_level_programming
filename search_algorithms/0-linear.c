#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using Linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    /* Check if array is NULL */
    if (array == NULL)
        return (-1);

    /* Iterate through array */
    for (i = 0; i < size; i++)
    {
        /* Print the value being checked */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* If value is found, return its index */
        if (array[i] == value)
            return (i);
    }

    /* Value not found in array */
    return (-1);
}
