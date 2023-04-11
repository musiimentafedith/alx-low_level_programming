#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be coverted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned int cval;

	count = 0;
	for (i = 63; i >= 0; i--)
	{
		cval = n >> i;
		if (cval & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

