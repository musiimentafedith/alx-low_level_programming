#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: array
 * Return: a character
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
