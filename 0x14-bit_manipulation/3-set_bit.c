#include <stdio.h>
#include "main.h"

/**
  *set_bit - function that sets the value
  *of a bit to 1 at a given index.
  *@n: pointer to the number where the bit will be set
  *@index:  is the index,starting from 0 of the bit to set
  *
  *Return: 1 on success, -1 on error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
