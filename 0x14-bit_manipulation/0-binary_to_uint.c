#include"main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number or o.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i, decimal = 1;
	int len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			val = val + decimal;
		}
		decimal *= 2;
	}
	return (val);
}
