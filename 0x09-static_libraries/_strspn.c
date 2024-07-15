#include "main.h"

/**
 * _strspn -function that gets the length of a prefix substring
 * @s: the string to search
 * @accept: the prefix to measure against
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    char *ptr;

    while (*s)
    {
        for (ptr = accept; *ptr; ptr++)
        {
            if (*s == *ptr)
            break;
        }
        if (*ptr == '\0')
            break;
        length++;
        s++;
    }
    return (length);
}
