#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_node - function that adds a new node
  *at the beginning of a list_t list.
  *@head: pointer to a pointer of the head of the linked list
  *@str: string to be duplicated and added to the new node
  *Return: the address of the new element
  *or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *neww_node;
	char *neww_str;
	unsigned int len = 0;

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
	neww_node->next = *head;
	*head = neww_node;

		return (neww_node);
}

