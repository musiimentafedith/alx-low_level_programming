#include "main.h"

/**
 * _isupper - check if the character is uppercase
 * @c: character to be checked
 * Return: 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
