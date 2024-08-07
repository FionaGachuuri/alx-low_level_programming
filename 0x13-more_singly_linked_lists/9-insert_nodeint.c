#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - function that inserts a
  *new node at a given position
  *@head: double pointer to the head of the list
  *@idx: index of e list where the new node should be added
  *@n: data to be added in the new node
  *
  *Return: address of the new node, or NULL if fail
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
