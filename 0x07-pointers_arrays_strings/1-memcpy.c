#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination array
 * @src: source array
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
