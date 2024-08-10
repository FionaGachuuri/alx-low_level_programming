#include <stdio.h>
#include "main.h"

/**
  *get_bit - function that returns the
  *value of a bit at a given index.
  *@index: index ,starting from 0 of the bit to get
  *@n: number to be checked
  *
  *Return: value of the bit at the index , or -1 on error.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

