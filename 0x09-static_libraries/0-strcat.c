#include "main.h"
#include <stddef.h>

/**
 * _strcat -function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the result string dest
 */

char *_strcat(char *dest, const char *src)
{
	char *d = dest;
	while (*d)
		d++;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return dest;
}
