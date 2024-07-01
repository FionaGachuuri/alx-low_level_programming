#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: pointer to the string to be reversed
 * Return: (0)
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
