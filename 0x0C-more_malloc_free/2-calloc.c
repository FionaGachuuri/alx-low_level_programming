#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_calloc -allocates memory of an array using malloc.
  *@nmemb: number of elements in an array
  *@size: number of bytes of the elements
  *Return: pointer to the allocated memory on success
  *return null if malloc fails, or when nmemb or size is 0
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);

	}
	memset(arr, 0, nmemb * size);
	return (arr);
}


