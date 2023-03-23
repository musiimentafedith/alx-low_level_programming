#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ps;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ps, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ps);
	printf("\n");
}


