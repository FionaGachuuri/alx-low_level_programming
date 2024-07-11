#include "main.h"
/**
 * _is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *s)
{
    if (*s == '\0')  /* Base case: empty string is a palindrome */
        return (1);

    return (_is_palindrome_recursive(s, s + _strlen(s) - 1));
}

/**
 * _is_palindrome_recursive - Recursive helper function for is_palindrome.
 * @s1: Pointer to the beginning of the string.
 * @s2: Pointer to the end of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome_recursive(char *s1, char *s2)
{
    if (*s1 != *s2)  /* Characters don't match, not a palindrome */
        return (0);

    if (s1 + 1 >= s2)  /* Reached middle or single character, palindrome */
        return (1);

    return (_is_palindrome_recursive(s1 + 1, s2 - 1));  /* Recursively check remaining characters */
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _strlen(s + 1));
}
