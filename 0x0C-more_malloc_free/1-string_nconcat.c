#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes that will be used.
 * Return: on success, pointer to the joined string that has
 * a null terminator
 *on fail, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1 = 0, length2 = 0, i, j;


	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	while (s1[length1] != '\0')

		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (length2 <= n)
		n = length2;

	s = malloc(sizeof(char) * (length1 + n + 1));

	if (s == NULL)

		return (NULL);

	for (i = 0; i < length1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
