#include "main.h"

/**
 * _atoi -function that converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int n = 0, sign = 1;

    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            sign *= -1;
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        n = n * 10 + (*s - '0');
        s++;
    }

    return (n * sign);
}
