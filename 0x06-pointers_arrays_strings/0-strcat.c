#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *@dest:string that willl be the destination when joined
 *@src:this is the source string
 * Return:pointer to the dest string that will be now created
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
