#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *free_list - function that frees a lists_t list
  *@head: pointer to the linked lists head.
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
