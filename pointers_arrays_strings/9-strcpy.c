#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest.
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy each character from src to dest */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Copy the null terminator */
    dest[i] = '\0';

    return dest;
}

