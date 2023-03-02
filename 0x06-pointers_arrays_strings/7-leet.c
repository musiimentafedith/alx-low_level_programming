#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string
 * Return: n
 */

char *leet(char *n)
{
	int i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i]; i++)
	{
		if (n[i] == s1[i])
		{
			n[i] = s2[i];
		}
	}
	return (n);
}

