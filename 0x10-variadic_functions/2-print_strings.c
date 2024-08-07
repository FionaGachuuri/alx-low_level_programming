#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings -function that prints strings,
  *followed by a new line.
  *@separator: is the string to be printed between the strings
  *@n: number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}

