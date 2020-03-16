#include "holberton.h"
/**
 * _printf -  select the type of function.
 * @format: first argumento of printf, s a character string
 * Return: return the number of printer chars
 */
int _printf(const char *format, ...)
{
	int nchar = 0;
	va_list list;
	op_ options[] = {
		{"c", f_char},
		{"s", f_string},
		{"%", f_perc},
		{"b", f_bin},
		{"i", f_int},
		{"d", f_int},
		{"u", f_int_unsigned},
		{NULL, NULL}
		};

	va_start(list, format);
	nchar = select_(format, list, options);
	va_end(list);
	return (nchar);
}
