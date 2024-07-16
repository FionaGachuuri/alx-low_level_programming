#include "main.h"

/**
 * _strncpy -function that copies up to n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, const char *src, size_t n)
{
    size_t j;

    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[j] = src[j];

    while (j < n)
        dest[j++] = '\0';

    return dest;
}
