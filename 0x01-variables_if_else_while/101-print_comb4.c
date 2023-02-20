#include<stdio.h>

/**
 * main - C program to print posible combinations of three digit numbers
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (y > x && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				if (x != 55 || y != 56)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
