#include <stdio.h>
/**
 * main - C program to print alphabets ecxept e except q
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
