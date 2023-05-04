#include"main.h"

/**
 * get_bit - returns value of a bit at a particular index
 * @n: number
 * @index: index with the bit hose value is to be returned
 * Return: value of the bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int temp;

	if (index > 63)
		return (-1);
	temp = n >> index;
	bit_value = temp & 1;
	return (bit_value);
}
