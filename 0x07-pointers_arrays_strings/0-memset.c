#include "main.h"

/**
 *_memset -function that fills memory with a constant byte.
 *@s: pointer to the memory area
 *@b: constant byte to fill
 *@m: number of bytes to be filled
*Return:pointer to the memory areas
*/

char *_memset(char *s, char b, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
		s[i] = b;
	}
	return (s);
}
