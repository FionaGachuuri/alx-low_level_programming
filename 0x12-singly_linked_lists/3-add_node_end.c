#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_node_end - function that adds a new node
  *at the end of a list_t list.
  *@str:string to be duplicated and added to the new node
  *@head: double pointer to the linked lists head
  *
  *Return: Address of the new element on success or
  *NULL on fail
  */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	char *neww_str;
	list_t *neww_node;
	list_t *temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}

	neww_node = malloc(sizeof(list_t));

	if (neww_node == NULL)
	{
		return (NULL);
	}

	neww_str = strdup(str);

	if (neww_str == NULL)
	{
		free(neww_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	neww_node->str = neww_str;
	neww_node->len = len;
	neww_node->next = NULL;

	if (*head == NULL)
	{
		*head = neww_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = neww_node;
	}
		return (neww_node);
}


