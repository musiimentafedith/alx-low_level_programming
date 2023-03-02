#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @n: input value
 * Return: n
 */

char *rot13(char *n)
{
	int i, j;
	char s1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char s2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; n[i]; i++)
	{
		for (j = 0; j < 27; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
