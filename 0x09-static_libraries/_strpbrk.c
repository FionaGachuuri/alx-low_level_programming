#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: the pointer to the first occurrence of any byte from accept,
 * or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *ptr;

    while (*s)
    {
        for (ptr = accept; *ptr; ptr++)
        {
            if (*s == *ptr)
                return (s);
        }
        s++;
    }
    return (NULL);
}
