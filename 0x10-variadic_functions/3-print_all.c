#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  *print_all -function that prints anything.
  *@format: list of arguments passed to the function.
  *
  */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
				default:
				j++;
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");

	va_end(args);
}

