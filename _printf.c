#include "holberton.h"

/**
 * _printf -  modded function of the printf,
 * here are builded the struct with each specifiers.
 * @format: first argumento of printf, s a character string
 * Return: return the number of printed chars
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
		{"o", f_oct},
		{"x", f_hex},
		{"X", f_heX},
		{"R", f_rot13},
		{"r", f_rev},
		{NULL, NULL}
		};

	va_start(list, format);
	nchar = select_(format, list, options);
	va_end(list);
	return (nchar);
}



