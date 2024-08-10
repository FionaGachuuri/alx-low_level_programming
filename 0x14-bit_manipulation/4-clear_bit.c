#include <stdio.h>
#include "main.h"

/**
  *clear_bit - function that sets the
  *value of a bit to 0 at a given index.
  *@index:  index,starting from 0 of the bit you want to set
  *@n: pointer to the number value to be set to 0
  *
  *Return: 1 on success, -1 0n error
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
