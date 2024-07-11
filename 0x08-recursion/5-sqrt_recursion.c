#include "main.h"

/**
 *_sqrt_helper -function to find the natural square root.
 *@n: The number to find the square root of.
 *@j: The current number to test as the square root.
 *Return: The natural square root, or -1 if none found.
 */

int _sqrt_helper(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_sqrt_helper(n, j + 1));
}

/**
 *  _sqrt_recursion - function that returns
 *  the natural square root of a number.
 *  @n: The number to find the square root of.
 *  Return: The natural square root,
 *  or -1 if n does not have one.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
