#include <stddef.h>
#include "dog.h"

/**
  * init_dog -a function that initialize a var of type struct dog
  * struct dog - a struct of type dog
  * @d: a pointer to struct dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner
  * Return: Always 0
  */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	};
}
