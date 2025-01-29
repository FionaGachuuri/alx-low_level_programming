#include "search_algos.h"

/**
 * print_search_range - Prints the current search range in the array
 * @array: The array being searched
 * @start: The starting index of the range
 * @end: The ending index of the range
 */
void print_search_range(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search_helper - Performs binary search on a sorted subarray
 * @array: Pointer to the first element of the array
 * @start: The starting index of the subarray
 * @end: The ending index of the subarray
 * @target: The value to search for
 *
 * Return: The index of the target value or -1 if not found
 */
int binary_search_helper(int *array, size_t start, size_t end, int target)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		print_search_range(array, start, end);

		mid = start + (end - start) / 2;
		if (array[mid] == target)
			return (mid);
		if (array[mid] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value in a sorted array
 * using the Exponential Search algorithm.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @target: The value to search for
 *
 * Return: The index of the target value, or -1 if not found
 *
 * Description: Uses exponential jumps followed by binary search.
 */
int exponential_search(int *array, size_t size, int target)
{
	size_t bound = 1, right_bound;

	if (array == NULL)
		return (-1);

	if (array[0] == target)
		return (0);

	while (bound < size && array[bound] <= target)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	right_bound = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, right_bound);

	return (binary_search_helper(array, bound / 2, right_bound, target));
}

