#include "main.h"
#include<stdlib.h>

/**
 * mset - sets memory to an int provided
 * @s: pointer
 * @x: int to set
 * @n: size of elements
 * Return: pointer
 */

void *mset(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = x;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size each element
 * Return: pointer to first allocated memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	mset(ptr, 0, nmemb * size);
	return (ptr);
}

