#include "main.h"
/**
 *_strcmp -function that compares two strings
 *@s1: first string
 *@s2: the second string
 *Return: zero if s1 and s2 are equal,
 *negative if the s1 is lexicographically lesser than s2,
 *otherwise result is positive
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
