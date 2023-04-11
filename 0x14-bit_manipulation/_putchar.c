#include"main.h"

/**
 * _putchar - prints a chractarer
 * @c: character to print
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
