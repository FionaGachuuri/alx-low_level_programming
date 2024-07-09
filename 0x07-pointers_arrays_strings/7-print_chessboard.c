#include "main.h"
/**
 * print_chessboard -function that prints the chessboard.
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int j;

	for (j = 0; j < 8; j++)
	{
		int i;

		for (i = 0; i < 8; i++)
			_putchar(a[j][i]);
		_putchar('\n');
	}
}
