#include "holberton.h"
#include <string.h>
int _printf(const char *format, ...)
{
	int nchar = 0;
	va_list list;
	va_start(list, format);
	op_ options[] = {
	{"c", f_char},
	{"s", f_string},
	{NULL, NULL}
	};

	nchar = select(format, list, options);
	va_end(list);
	return(nchar);
}

