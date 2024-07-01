#include "main.h"

/**
 * void swap_int -  function that swaps the values of a and b
 * @a : swaped to contain values of b
 * @b : swaped to contain values of a
 * Return : (0) if success
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
