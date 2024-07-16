#include "main.h"

/**
 * _strcpy -function that copies the string pointed to by src,
 *including the null terminator,
 * to the buffer pointed to by dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *ptr = dest;

	while (( *ptr++ = *src++));
	
	return dest;
}
