#include"main.h"

/**
 * binary_to_unit - converst a binary string to unsigned int
 * @b: pointer to binary string
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, d_value = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		d_value = 2 * d_value + (b[i] - '0');
	}
	return (d_value);
}
