#include <stdio.h>
#include "main.h"

/**
  *binary_to_uint - function that converts
  *binary number to an unsigned int.
  *@b: pointer to a string of 0 and 1 chars
  *
  *Return: Converted number,or 0 if b is NULL,or 0
  *if there is one or more chars in the string b that is not 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		convert = (convert << 1) | (*b - '0');
		b++;
	}

	return (convert);
}
