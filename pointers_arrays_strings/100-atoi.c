#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * 
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0;

    /* Skip non-numeric characters */
    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;  /* Toggle sign on encountering '-' */
        else if (s[i] == '+')
            sign *= 1;   /* Do nothing for '+' */
        i++;
    }

    /* Convert the number part */
    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;
}

