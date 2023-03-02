#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
