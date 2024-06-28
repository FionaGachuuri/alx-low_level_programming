#include <stdio.h>

/**
 * main -prints the largest prime factor
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n, p;

n = 612852475143;
for (p = 2; p <= n; p++)
{
if (n % p == 0)
{
n = n / p;
p--;
}
}
printf("%ld\n", p);
return (0);
}
