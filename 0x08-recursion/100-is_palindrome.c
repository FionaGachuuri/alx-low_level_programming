#include "main.h"

/**
 *  _strlen_recursion - Returns the length of a string
 *  @s: The string to measure.
 *  Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome_helper -Helper function to check if a string
 *is a palindrome.
 *@s: The string to check.
 *@end: The ending index.
 *Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 if not.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	 int length = _strlen_recursion(s)

	if (length == 0)
		return (1);
return (is_palindrome_helper(s, 0, length - 1));
}
