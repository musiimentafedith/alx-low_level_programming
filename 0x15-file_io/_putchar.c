#include"main.h"
#include<unistd.h>

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
