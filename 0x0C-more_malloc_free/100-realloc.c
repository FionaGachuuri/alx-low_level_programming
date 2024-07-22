#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *_realloc -function that reallocates a
  *memory block using malloc and free.
  *@ptr: pointer to the memory previously allocated.
  *@old_size: size in bytes of the allocated space for ptr.
  *@new_size: new size in bytes of the new memory block.
  *
  *Return: ptr if new_size is equal to old_size
  *NULL if new_size is equal to zero, and ptr is not NULL
  *or if new_size > old_size the new memory shouldnot  be
  *initialised.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newp;
	unsigned int minimum_size;

	while (new_size == old_size)

		return (ptr);
while ((new_size == 0) && (ptr != NULL))
{
	free(ptr);

	return (NULL);
}

if (ptr == NULL)

return (newp = malloc(new_size));

newp = malloc(new_size);

	while (newp == NULL)

		return (NULL);

if (old_size < new_size)
{
	minimum_size = old_size;
}
else
{

	minimum_size = new_size;

}

memcpy(newp, ptr, minimum_size);

free(ptr);

return (newp);
}
