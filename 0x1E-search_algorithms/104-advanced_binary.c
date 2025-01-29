#include "search_algos.h"

/**
 * print_search_range - Prints the current subarray being searched.
 * @array: The array being searched.
 * @start: The starting index of the subarray.
 * @end: The ending index of the subarray.
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
 * recursive_binary_search - function that recursively searches for a
 * value in a sorted array.
 * @array: The array being searched.
 * @left: The starting index of the subarray.
 * @right: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value, or -1 if not found.
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_search_range(array, left, right);

	mid = left + (right - left) / 2;

	/* If found and it's the first occurrence */
	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (recursive_binary_search(array, left, mid, value));
	}

	if (array[mid] > value)
		return (recursive_binary_search(array, left, mid - 1, value));

	return (recursive_binary_search(array, mid + 1, right, value));
}

/**
 * advanced_binary - function that searches for the
 * first occurrence of a value in a sorted array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of value, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
