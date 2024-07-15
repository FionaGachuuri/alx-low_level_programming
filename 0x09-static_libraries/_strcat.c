#include "main.h"

/**
 * _strcat -function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
