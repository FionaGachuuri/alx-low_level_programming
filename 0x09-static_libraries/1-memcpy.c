#include "main.h"

/**
 * _memcpy -function that copies n bytes from
 * memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;

	while (n--)
		 *d++ = *s++;

	return dest;
}
