#include "main.h"
/**
 * _strchr - locattes a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
			return (NULL);
	}
}
