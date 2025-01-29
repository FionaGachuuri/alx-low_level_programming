#include "search_algos.h"

/**
  *linear_search -function that searches for a value in an
  *array of integers using the Linear search algorithm
  *@array: pointer to the first element of the array
  *@size: number of elements in the array
  *@value: value to be searched
  *
  *Return: first index where the value is located
  *or -1 if not found or NULL
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value chacked array[%lu] = [%d]\n", i, array[1]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
