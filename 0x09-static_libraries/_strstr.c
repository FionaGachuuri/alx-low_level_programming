#include "main.h"

/**
 * _strstr -function that locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 * Return: the pointer to the beginning of the located substring
 * * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return (haystack);
        haystack++;
    }
    return (NULL);
}
