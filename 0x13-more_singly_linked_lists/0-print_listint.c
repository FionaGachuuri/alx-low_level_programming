#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *print_listint -  function that prints all
  *the elements of a listint_t list.
  *@h: pointer to the list's head
  *
  *Return: Number of nodes in the list
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}

