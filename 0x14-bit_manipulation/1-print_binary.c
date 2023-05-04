#include"main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: number whose binary representation is to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if ((temp & 1) == 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
