#include "main.h"

/**
 * _memcpy -function that copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = dest;

    while (n-- > 0)
        *dest++ = *src++;
    return (ptr);
}
