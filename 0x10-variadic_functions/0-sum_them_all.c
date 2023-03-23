#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameter
 * @n: number of parameters to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int i, sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
