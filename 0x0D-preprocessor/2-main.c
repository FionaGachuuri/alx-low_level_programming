#include "main.h"

/**
  *main -entry point(prints name of the file)
  *
  *Return: 0 on success
  */

int main(void)
{
	char *name = __FILE__;
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);

	}

	_putchar('\n');

return (0);
}
