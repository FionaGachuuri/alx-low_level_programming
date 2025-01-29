#include "search_algos.h"

/**
 * print_probe - Prints the checked index and value
 * @array: The array being searched
 * @index: The index being checked
 * @size: The size of the array
 */
void print_probe(int *array, size_t index, size_t size)
{
	printf("Value checked array[%lu]", index);
	if (index >= size)
		printf(" is out of range\n");
	else
		printf(" = [%d]\n", array[index]);
}

/**
 * interpolation_search - function that searches for a value in a sorted array
 * using the Interpolation search algorithm
 * @array: input array (must be sorted)
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t probe_index, left = 0, right = size - 1;
	double position_factor;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right && value >= array[left] && value <= array[right])
	{
		/* Compute probe position using interpolation formula */
		position_factor = (double)(right - left) / (array[right]
				- array[left]) * (value - array[left]);
		probe_index = left + (size_t)position_factor;

		/* Print the current probe index */
		print_probe(array, probe_index, size);

		/* Check if probe_index is out of range */
		if (probe_index >= size)
			break;

		/* Check if value is found */
		if (array[probe_index] == value)
			return ((int)probe_index);

		/* Adjust search range */
		if (array[probe_index] < value)
			left = probe_index + 1;
		else
			right = probe_index - 1;
	}

	return (-1);
}
