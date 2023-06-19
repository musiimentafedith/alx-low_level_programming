#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: input value
 * @dest: input value
 * @n: number of characters to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
