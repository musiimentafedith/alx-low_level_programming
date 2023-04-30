#include "main.h"
/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * Return: 1 or 2;
 */
int handle_print(const char *fmt, va_list list)
{
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent}
	};
	for (k = 0; fmt[k] != '\0'; k++)
	{
		if (fmt[k] == NULL)
			return (-1);
		for (i = 0; fmt_types[i].fmt != '\0'; i++)
		if (fmt[k] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list));

	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[k] == '\0')
			return (-1);
	}
		return (count);
	}
}
