#include "main.h"

/**
 *reverse_array -function that reverses the content of an array of integers
 *@a: The array of integers
 * @n:The number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp, j;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = temp;
	}
}
