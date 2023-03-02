#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @n: input value
 * Return: n
 */

char *rot13(char *n)
{
	int i, j;
	char s1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char s2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; n[i]; i++)
	{
		for (j = 0; j < 54; j++)
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
