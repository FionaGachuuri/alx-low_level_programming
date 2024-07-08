#include "main.h"

/**
 *string_toupper -function that changes a strings lowercase to uppercase
 *@str: string to be ammended
 *Return: new , ammended string
 */

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}
