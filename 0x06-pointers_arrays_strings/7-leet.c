#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n[j] == s1[i])
			{
				n[j] = s2[i];
			}
		}
	}
	return (n);
}
