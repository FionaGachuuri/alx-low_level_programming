#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -function that merges two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space in memory
 * which contains contents of s1,followed
 * by contents of s2, and a null terminator
 */

char *str_concat(char *s1, char *s2)
{
	char *merge;
	unsigned int a, b, length1 = 0, length2 = 0;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		length1++;

	for (a = 0; s2[a] != '\0'; a++)

		length2++;
	merge = malloc((length1 + length2 + 1) * sizeof(char));

		if (merge == NULL)
			return (NULL);

	for (a = 0; a < length1; a++)
		merge[a] = s1[a];

	for (b = 0; b < length2; b++)
		merge[a + b] = s2[b];

merge[a + b] = '\0';

return (merge);
}

