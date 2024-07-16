#include "main.h"
#include <ctype.h>

/**
 * _atoi -function that converts a string to an integer
 * @str: string to convert
 * Return: converted integer, or 0 if no valid conversion could be performed
 */

int _atoi(const char *str)
{
    int sign = 1;
    long result = 0;

    while (*str && isspace((unsigned char)*str))
        str++;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str && isdigit((unsigned char)*str))
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return (sign * result);
}
