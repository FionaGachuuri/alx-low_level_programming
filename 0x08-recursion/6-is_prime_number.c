#include "main.h"

/**
 * is_prime_helper -Helper function to determine if number is prime.
 * @n: The number to  be checked.
 * @j: The current divisor to test.
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_helper(int n, int j)
{
	if (n <= 1)
		return (0);
	if (j * j > n)
		return (1);
	if (n % j == 0)
		return (0);
	return (is_prime_helper(n, j + 1));
}

/**
 * is_prime_number -Function that returns 1,
 * if the input integer is a prime number, otherwise 0.
 * @n: The number to check.
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
