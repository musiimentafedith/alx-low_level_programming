#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string of charcters
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	return (ptr);
}

