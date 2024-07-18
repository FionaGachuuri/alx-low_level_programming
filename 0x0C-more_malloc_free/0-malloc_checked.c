#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -function that allocates memory using malloc.
 * @b: number of bytes to be allocated
 * Return: pointer to the allocated memory on success
 * if fail, nomal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
