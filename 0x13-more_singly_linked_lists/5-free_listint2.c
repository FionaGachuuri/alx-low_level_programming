#include <stdlib.h>
#include "lists.h"

/**
  *free_listint2 - function that frees a listint_t list.
  *@head: double pointer to the lists's head
  *
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
