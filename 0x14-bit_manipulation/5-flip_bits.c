#include"main.h"

/**
 * flip_bits - returns number of bits you need o flip to get
 * from one number to other
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;
	int i;
	unsigned int count = 0;

	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		y = (m >> i) & 1;
		if (x != y)
		{
			count++;
		}
	}
	return (count);
}
