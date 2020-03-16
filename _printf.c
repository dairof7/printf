#include "holberton.h"

int _printf(const char *format, ...)
{
	int nchar = 0;
	va_list list;
	va_start(list, format);
	op_ options[] = {
	{"c", f_char},
	{"s", f_string},
	{"%", f_perc},
	{"b", f_bin},
	{"i", f_int},
	{NULL, NULL}
	};

	nchar = select_(format, list, options);
	va_end(list);
	return(nchar);
}

