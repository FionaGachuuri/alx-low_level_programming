#include <stdio.h>
#include <stdlib.h>

/**
  *binary_search - searches for a value in a sorted array of
  *integers using the Binary search algorithm
  *@array: pointer to the first element of the array to search in
  *@size: number of elements in array
  *@value: value to search for
  *
  *Return: index where value is located, or if value is not present
  *in array or if array is NULL, your function must return -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i, right, mid;

	if (array == NULL || size == 0)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
