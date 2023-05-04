#include"main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to the number
 * @index: bit position
 * Return: 1 on success, 0 on failre
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);
	mask = ~(1 << index);
	*n = mask & *n;
	return (1);
}
