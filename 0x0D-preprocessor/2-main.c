#include "main.h"

/**
  *main -entry point(prints name of the file)
  *
  *Return: void
  */

int main(void)
{
	char *name = __FILE__;

	while (*name)
	{
		_putchar(*name);

		name++;
	}

	_putchar('\n');

return (0);
}
