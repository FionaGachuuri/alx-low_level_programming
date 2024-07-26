#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all -function that sums all its parameters
  *@n: number of parameters
  *
  *Return: sum of all parameters on success,
  * if n == 0 , return 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_par;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum_par, n);

	while (i < n)
	{
		i++;

		sum += va_arg(sum_par, int);
	}
	va_end(sum_par);

	return (sum);
}
