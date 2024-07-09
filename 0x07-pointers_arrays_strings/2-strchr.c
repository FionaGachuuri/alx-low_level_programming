#include "main.h"
/**
 * _strchr -finction that locates a character in a string
 * @s: the string to search
 * @c: icharacter to be located
 * Return: the pointer to the first instance of c in s,
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
