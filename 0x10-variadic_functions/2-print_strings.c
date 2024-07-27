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
	va_list strin;
	unsigned int i;
	char *s;

	va_start(strin, n);
			for (i = 0; i < n; i++)
			
			s = va_arg(strin, char *);

			if (s == NULL)
			{
			printf("(nil)");
			}
			else
			{
			printf("%s", s);
			}

			if (i < n - 1 && separator != NULL)
			{
			printf("%s", separator);
			}
			va_end(strin);
			printf("\n");
}
