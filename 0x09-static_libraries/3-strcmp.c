#include "main.h"

/**
 * _strcmp -function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if both strings are equal,
 * negative if s1 < s2, positive if s1 > s2
 */

int _strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}
