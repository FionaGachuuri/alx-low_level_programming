#include "main.h"
#include <string.h>

/**
 * _strncat -function that appends up to n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to append
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, const char *src, size_t n)
{
    size_t length_dest = strlen(dest);
    size_t j;

    for (j = 0; j < n && src[j] != '\0'; j++)
        dest[length_dest + j] = src[j];

    dest[length_dest + j] = '\0';

    return dest;
}
