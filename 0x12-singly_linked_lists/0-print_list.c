#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  *print_list -function that prints all the elements
  *of a list_list list.
  *@h: pointer to the head of the linked lust
  *Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t total_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		total_node++;

	}
	return (total_node);
}

