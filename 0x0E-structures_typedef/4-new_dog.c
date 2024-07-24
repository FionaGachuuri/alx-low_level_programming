#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	dup = malloc(len);
	if (dup == NULL)
	{
		return (NULL);
	}
	memcpy(dup, str, len);
	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);

		return (NULL);
	}
	dog->age = age;

	return (dog);
}
