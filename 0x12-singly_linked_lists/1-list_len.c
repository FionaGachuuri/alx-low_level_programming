#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *list_len -function that returns the number
  *of elements in a linked list_t list.
  *@h: pointer to the head of the linked list
  *
  *Return: number of elements in the linked list
  */

size_t list_len(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
