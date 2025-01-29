#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the Jump Search algorithm.
 *
 * @list: A pointer to the head of the linked list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *or NULL if not found.
 *
 * Description: Prints every checked value and the search range.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, index;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = list;
	current = list;

	while (current->next && current->n < value)
	{
		prev = current;
		for (index = 0; index < step && current->next; index++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

