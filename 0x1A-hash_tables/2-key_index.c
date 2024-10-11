#include "hash_tables.h"

/**
  *key_index - function that gives the index of a key
  *@key: The key whose index we are finding.
  *@size: The size of the array of the hash table
  *
  *Return: ndex at which the key/value pair
  *should be stored in the array of the hash table
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
