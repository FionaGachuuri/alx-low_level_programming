#include "hash_tables.h"
#include <string.h>

/**
  *hash_table_get - function that gets a value
  *associated with a key in e hash table.
  *@ht: pointer to the hash table to lokk into.
  *@key: The key to find.
  *
  *Return: Value associated with the key in the hash table
  * Returns NULL if there is no match
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
