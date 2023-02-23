#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal n times
 * @n: number of times
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
			_putchar('\n');
		}
	}
}
