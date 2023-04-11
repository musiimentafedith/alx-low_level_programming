#include"main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int crr;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crr = y >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
