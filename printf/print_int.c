#include "main.h"
#include<stdio.h>

/**
 * print_int - prints an integer
 * @x: int to be printed
 * Return: void
 */

void print_int(int x)
{
	if (x < 0)
	{
		putchar('-');
		x = -x;
	}
	if (x / 10 != 0)
	{
		print_int(x / 10);
	}
	putchar((x % 10) + 48);
}
