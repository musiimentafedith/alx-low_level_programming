#include<stdio.h>

/**
 * main - C program to print alphabets both in lower and upper cases
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('toupper(ch)');
	putchar('\n');
	return (0);
}
