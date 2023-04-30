#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct a_fmt - Struct op
 *
 * @fm: The format.
 * @func: The function associated.
 */
struct a_fmt
{
	char fm;
	int (*func)(va_list, char[], int, int, int, int);
};
/**
 * typedef struct a_fmt fm_s - Struct op
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct a_fmt fm_s;

int _printf(const char *format, ...);
int handle_print(const char *fmt, va_list list);

/* functions to print string and character*/
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);

#endif



