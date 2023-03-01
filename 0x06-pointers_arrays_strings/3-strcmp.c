#include "main.h"

/**
 * _strcmp - compairs two strings
 * @s1: string
 * @s2: string
 * Return: 0 if the strings are the same, else si - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = i;
			break
		}
	}
	if (j == 1)
	{
		return (s1 - s2);
	}
	else
		return (0);
}
