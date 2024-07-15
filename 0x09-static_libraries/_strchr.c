#include "main.h"

/**
 * _strchr -function that locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: the pointer to the first occurrence of c,
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (c == '\0' ? s : NULL);
}
