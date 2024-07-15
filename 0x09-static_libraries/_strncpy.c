#include "main.h"

/**
 * _strncpy -function that copies a string
 * using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to use from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (n-- > 0 && *src)
        *dest++ = *src++;
    while (n-- > 0)
        *dest++ = '\0';
    return (ptr);
}
