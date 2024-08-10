#include <stdio.h>
#include "main.h"

/**
  *flip_bits - function that returns the number of bits needed
  *to flip to getfrom one number to another.
  *@n: first number
  *@m:second number
  *
  *Return: number of bits needed to flip.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_results = n ^ m;
	unsigned int count = 0;

	while (xor_results)
	{
		count += xor_results & 1;
		xor_results >>= 1;
	}

	return (count);
}

