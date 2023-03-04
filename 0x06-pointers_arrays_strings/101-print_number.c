#include "main.h"

/**
 * print_number - prints an integer
 * @n: int input value
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n * -1 < 10)
		{
			_putchar(n * -1 + 48);
		}
		else if (n * -1 >= 10 && n * -1 <= 99)
		{
			_putchar((n * -1) / 10 + 48);
			_putchar((n * -1) % 10 + 48);
		}
	}
	else if (n < 10 && n > 0)
	{
		_putchar(n + 48);
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(n / 100 + 48);
		_putchar((n / 10) % 10 + 48);
		_putchar(n % 10 + 48);
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar(n / 1000 + 48);
		_putchar((n / 100) % 10 + 48);
		_putchar((n / 10) % 10 + 48);
		_putchar(n % 10 + 48);
	}
}