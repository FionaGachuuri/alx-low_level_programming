#include "main.h"

/**
 * _pow_recursion -function that returns,
 * the value of x raised to the power of y
 *@x: The base value.
 *@y: The exponent value.
 *Result: Result of x raised to power of y
 *Return: If y is lower than 0, returns -1 to indicate an error.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
