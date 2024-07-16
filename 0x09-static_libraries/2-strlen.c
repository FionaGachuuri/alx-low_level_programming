#include "main.h"
#include <stddef.h>

/**
 * _strlen -function that calculates the length of a string
 * @s: string to measure
 * Return: length of s
 */

size_t _strlen(const char *s)
{
    const char *start = s;

    while (*s++)
        ;

    return s - start;
}
