#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - function that prints a name using *f
  *@name: pointer to the name to be printed
  *@f: pointer to a function that takes a char *argumrnt
  *and returns void
  *
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}




