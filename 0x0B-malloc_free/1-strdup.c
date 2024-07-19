#include "main.h"
#include <stdlib.h>

/**
 * _strdup -function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer to the duplicated string,
 * or NULL if there was no enough memory available.
 */

char *_strdup(char *str)
{
	char *dupl;
	unsigned int j, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	dupl = malloc((length + 1) * sizeof(char));

	if (dupl == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < length; j++)
	{

		dupl[j] = str[j];
	}

	dupl[length] = '\0';

	return (dupl);
}



