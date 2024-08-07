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
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)

	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
