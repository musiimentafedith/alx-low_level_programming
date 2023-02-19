#include<stdio.h>

/**
 * main - C program that prints the alphabet except q and e
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
	}
	putchar ('\n');
	return (0);
}
