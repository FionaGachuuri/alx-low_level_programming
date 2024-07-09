#include "main.h"
/**
 * _strchr -finction that locates a character in a string
 * @s: the string to search
 * @c: the character to be located
 * Return: Always 0 if  (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
