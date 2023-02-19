#include<stdio.h>

/**
 * main - C program to print base 10 single digits using putchar
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar("\n");
	return (0);
}
