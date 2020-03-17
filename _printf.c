#include "holberton.h"
int errorcheck(const char *format);
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
		{"o", f_oct},
		{"x", f_hex},
		{"X", f_heX},
		{NULL, NULL}
		};

	va_start(list, format);


	if (errorcheck(format) != -1)
		nchar = select_(format, list, options);
	va_end(list);
	return (nchar);
}

/**
 * errorcheck -  check error  of format data.
 * @format: first argumento of printf, s a character string
 * Return: return -1 on error
 */
int errorcheck(const char *format)
{
	int i = 0;

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == ' ' && format[i + 2] == ' ')
			return (-1);
		i++;
	}
	return (0);
}
