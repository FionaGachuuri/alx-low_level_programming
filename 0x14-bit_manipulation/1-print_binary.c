#include <stdio.h>
#include "main.h"

/**
  *print_binary -function that prints the
  *binary representation of a number.
  *@n: number to be represented in binary
  *
  */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}


