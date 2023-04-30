#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, count = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			printed++;
		}
		else
		{
			++i;
			printed = handle_print(format, list);
			if (printed == -1)
				return (-1);
			count += printed;
		}
	}
	va_end(list);

	return (count);
}
