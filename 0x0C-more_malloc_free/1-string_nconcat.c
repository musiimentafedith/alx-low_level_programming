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
	while (s1 && s1[len1])

		len1++;

	while (s2 && s2[len2])

		len2++;

	if (n > len1 || n == len2)
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
