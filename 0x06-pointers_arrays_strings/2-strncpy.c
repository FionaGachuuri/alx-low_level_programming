#include "main.h"

/**
 *_strncpy -function that copies a string
 *@dest: Destination string
 *@src: source string
 *@n: number of bytes to be copied from src
 *Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i= 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

