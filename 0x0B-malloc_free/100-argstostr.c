#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -function that concatenates
 * all the arguments of the program.
 * @ac: argument count
 * @av: pointer to the array of size ac
 * Return: NULL if ac == 0 or av == NULL,
 * Pointer to a new string containing all arguments,
 * each followed by a newline character  or
 * NULL, if memory allocation fails.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int c = 0;
	int a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		int b = 0;

		while (av[a][b])
		{
			total_length++;
			b++;
		}
		total_length++;
		a++;
	}

	str = malloc((sizeof(char) * total_length) + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		int b = 0;
		while (av[a][b])
		{
			str[c] = av[a][b];
			b++;
			c++;
		}
		str[c] = '\n';
		c++;
		a++;
	}
	str[c] = '\0';
	return (str);
}
