#ifndef _DOG_H
#define _DOG_H

/**
  *struct dog - description of a dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: name of the owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif /* _DOG_H */
