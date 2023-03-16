#include "main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: size of bytes of s2 to concatenate
 * Return: pointer to s1 concatnated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	for (len1 = 0; s1[len1] != '\0';)
	{
		len1++;
	}
	for (len2 = 0; s2[len2] != '\0';)
	{
		len2++;
	}
	if (n > len2 || n == len2)
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (n < len2 && i < (n + len1))
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	while (n > len2 || n == len2 && i < (len1 + len2))
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
