#include "main.h"

/**
 * _puts_recursion -function that puts a string followed by a new line.
 *@s: pointer to the string that is to be printed.
 *Return: (0)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

