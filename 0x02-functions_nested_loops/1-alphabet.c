#include "main.h"

/**
 * print_alphabet - print alphabate in lowercase followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
