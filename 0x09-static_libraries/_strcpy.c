#include "main.h"

/**
 * _strcpy -function that copies the string pointed to by src,
 * including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to copy to
 * @src: the string to  be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;

    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
