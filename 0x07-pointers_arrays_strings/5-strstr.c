#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] && needle[0] != '\0')
		{
			flag = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				return (haystack);
			}
		}
	}
	return (0);
}
