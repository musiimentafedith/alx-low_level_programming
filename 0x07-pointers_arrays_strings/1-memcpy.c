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
	while (n)
	{
		*(dest++) = *(src++);
		n--;
	}
	return (dest);
}
