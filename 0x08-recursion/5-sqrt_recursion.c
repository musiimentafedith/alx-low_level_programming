#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_ssqrt_recursion(n, 0));
}
/**
 * _ssqrt_recursion - rooks for a square root of a number recursively.
 * @n: number whose square root is to be found
 * @i: iteration
 * Return: i
 */

int _ssqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (n, i + 1);
}
