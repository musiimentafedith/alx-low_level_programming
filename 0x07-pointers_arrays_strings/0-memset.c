#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: starting adress of memory to be filled
 * @b: character to be filled
 * @n: number of bytes to be filled
 * Return: pointer to an array with filled values.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n && n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
