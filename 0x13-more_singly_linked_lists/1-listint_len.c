#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *listint_len - function that returns the number of
  *elements in a linked listint_t list.
  *@h: pointer to the list's head
  *
  *Return: Number of nodes in the list.
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

