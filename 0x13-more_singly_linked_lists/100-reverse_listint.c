#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *reverse_listint -function that reverses a listint_t linked list.
  *@head: double pointer to the head of list
  *
  *Return: Pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;

	}

	*head = previous;
	return (*head);
}
