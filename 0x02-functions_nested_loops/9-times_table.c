#include "main.h"

/**
 * times_table - prints the 9 time table
 * Return: 0
 */

void times_table(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + 48);
			}
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
