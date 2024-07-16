#include "main.h"

/**
 * puts -function that prints a string followed by a new line
 * @str: string to print
 * Return: nothing
 */

int _puts(const char *str)
{
    while (*str)
        _putchar(*str++);
    _putchar('\n');
}
