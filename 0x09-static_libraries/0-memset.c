#include "main.h"
#include <stddef.h>

/**
 * _memset -function that fills the first n bytes
 * of the memory area pointed to by s
 * with the constant byte c
 * @s: pointer to the memory area
 * @c: value to fill the memory area with
 * @n: number of bytes to change
 * Return: pointer to original memory area s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return s;
}
