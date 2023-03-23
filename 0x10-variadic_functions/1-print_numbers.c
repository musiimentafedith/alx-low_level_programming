#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pn;

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%s", va_arg(pn, char *));
		}
		else if (separator == NULL)
		{
			printf("%s", va_arg(pn, char *));
		}
		else
		{
			printf("%s", separator);
			printf("%s", va_arg(pn, char *));
		}
	}
	va_end(pn);
	printf("\n");
}
