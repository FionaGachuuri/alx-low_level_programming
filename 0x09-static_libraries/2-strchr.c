#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: string to search in
 * @c: character to search for
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return NULL;
		s++;
	}
	return (char *)s;
}
