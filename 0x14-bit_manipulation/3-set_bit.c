#include"main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: pointer
 * @index: position of the bit
 * Return: 1 if it worked, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = mask | *n;
	return (1);
}
