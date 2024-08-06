#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *delete_nodeint_at_index -function that deletes
  *the node at index of a listint_t linked list.
  *@head: double pointer to the head of the list
  *@index: Index of the node that should be deleted
  *Index starts at 0.
  *
  *Return: 1 on success, -1 on fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		node_delete = *head;
		*head = (*head)->next;
		free(node_delete);

		return (1);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	node_delete = temp->next;
	temp->next = temp->next->next;
	free(node_delete);

	return (-1);
}
