#include "main.h"
#include <stdlib.h>

/**
  *array_range -function that creates an array of integers
  *@min: smallest value in the array
  *@max: largest value in the array
  *Return: pointer to the newly created array on success
  * or NULL on fail
  */

int *array_range(int min, int max)
{
	int i = 0, size;
	int *arr;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(int));

	while (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > size; i++)
	{
		arr[i] = min + i;
	arr++;
	}
	return (arr);
}
