#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: int to check
 * Return: 1 if c is int, 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
