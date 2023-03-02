#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string
 * Return: a
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 97 && a[i] >= 122)
			{
				a[i] = a[i] - 32;
			}
		}
		else if (a[i - 1] == ',' || a[i - 1] == '.' || a[i - 1] == ';'
				|| a[i - 1] == '!' || a[i - 1] == '?' ||
				a[i - 1] == '"' || a[i - 1] == ')' || a[i - 1] == '('
				|| a[i - 1] == '{' || a[i - 1] == '}' || a[i - 1] == '\n'
				|| a[i - 1] == '\t' || a[i - 1] == ' ')
		{
			if (a[i] >= 97 && a[i] >= 122)
			{
				a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
