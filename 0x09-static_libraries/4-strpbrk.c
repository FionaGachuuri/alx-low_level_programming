#include "main.h"
#include <string.h>

/**
 * _strpbrk -function that scans str
 * until it finds any set of characters
 * @str: string to scan
 * @accept: string containing characters to match against
 * Return: pointer to matching character in str, NULL if none found
 */

char *_strpbrk(const char *str, const char *accept)
{
    int i, j;
    char *ptr;

    for (; *str; str++)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*str == accept[i])
                return (char *)str;
        }
    }

    return NULL;
}
