#include "main.h"

/**
 * _strlen -function that returns the length of a string
 * @s: the string to be evaluated
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s++)
        length++;
    return (length);
}
