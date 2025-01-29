#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int block_start, block_size, step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	block_size = (int)sqrt((double)size);
	step = 0;
	prev_index = block_start = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", block_start, array[block_start]);

		if (array[block_start] == value)
			return (block_start);
		step++;
		prev_index = block_start;
		block_start = step * block_size;
	} while (block_start < (int)size && array[block_start] < value);

	printf("Value found between indexes [%d] and [%d]\n",
			prev_index, block_start);

	for (; prev_index <= block_start && prev_index < (int)size; prev_index++)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index, array[prev_index]);
		if (array[prev_index] == value)
			return (prev_index);
	}

	return (-1);
}
