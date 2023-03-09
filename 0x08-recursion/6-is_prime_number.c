#include "main.h"

/**
 * is_prime_number - checks if the int is prime or not
 * @n; int to check
 * Return:  1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_pprime_number(n, n-1));
}
/**
 * is_pprime_number - cheecks if the int is prime recursively
 * @n: int to be checked
 * @div: divisor
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_pprime_number(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0 && div > 0)
		return (0);
	else
		return (is_pprime_number(n, div - 1));
}		
