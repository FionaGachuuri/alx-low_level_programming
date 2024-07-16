#include "main.h"
#include <string.h>

/**
 * _strstr - locates the first occurrence of needle in haystack
 * @haystack: string to search in
 * @needle: string to search for
 *Return: pointer to beginning of needle in haystack, NULL if not found
 */

char *_strstr(const char *haystack, const char *needle)
{
    const char *h = haystack;
    const char *n = needle;

    while (*h)
    {
        if (*h == *n && strncmp(h, n, strlen(needle)) == 0)
            return (char *)h;
        h++;
    }

    return NULL;
}
