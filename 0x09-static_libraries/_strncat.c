#include "main.h"

/**
 * _strncat -function that concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to use from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*dest)
        dest++;
    while (n-- > 0 && *src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
