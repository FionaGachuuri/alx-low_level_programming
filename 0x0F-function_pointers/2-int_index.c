#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index -function that searches for an integer
  *@array: pointer to an array
  *@size: number of elements in the array
  *@cmp: pointer to the function to be used to compare values
  *
  *Return: index of the first element of the array,
  *if no element matches -1,
  *if size<= 0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}

	if (cmp(array[i]) > 0)
	{
		return (array[i]);
	}

	if (cmp(array[i]) <= 0)
	{
		return (-1);
	}
	return (array[i]);
}

