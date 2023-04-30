#include "main.h"
/*****print char**********/
/**
 * print_char - Prints a char
 * @types: List a of arguments
 *Return: Number of chars printed
 */
int print_char(va_list types)
{
	char c = va_arg(types, int);

	return (handle_write_char(c));
}

/*************string************/
/**
 * print_string - Prints a string
 * @types: List a of arguments
 * Return: Number of chars printed
 */

int print_string(va_list types)
{
	int length = 0, i;
	char *str;

	str = va_arg(types, char *);
	if(str == NULL)
	{
		str = "(null)";
	}

	while (str[length] != '\0')
		length++;
	return (write(1, str, length));
}
/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * Return: Number of chars printed
 */
int print_percent(va_list types)
{
	return (write(1, "%%", 1));
}


