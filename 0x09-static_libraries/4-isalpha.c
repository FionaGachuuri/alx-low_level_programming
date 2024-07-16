#include "main.h"

/**
 * _isalpha -function that checks if a character is an alphabet letter
 * @c: character to check
 * Return: 1 if c is an alphabet letter, 0 otherwise
 */

int _isalpha(int c)
{
    return (_isupper(c) || _islower(c));
}
