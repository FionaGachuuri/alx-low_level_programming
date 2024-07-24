#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - function that executes a function
  *given as a parameter on each element of an array.
  *@array: pointer to the array
  *@size: size pf the array
  *@action: function pointer that executes on each element
  *
  *Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


