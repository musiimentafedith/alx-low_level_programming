#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 if not 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar(i);
}
