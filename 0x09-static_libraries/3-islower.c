#include "main.h"

/**
 * _islower -function that checks if a character is lowercase
 * @c: character to check
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
