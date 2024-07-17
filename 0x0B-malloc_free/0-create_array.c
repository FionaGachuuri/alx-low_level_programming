#include "main.h"
#include <stdlib.h>

/**
 * create_array -function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to be created.
 * @c: character to initialize each element of the array with.
 * Return: if size = 0 or it fails, return NULL,
 * otherwise return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)

		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		array[i] = c;

	return (array);

}
