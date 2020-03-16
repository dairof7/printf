#include "holberton.h"
int f_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
int f_string(va_list list)
{
	return(_puts(va_arg(list, char *)));
}

int f_perc(__attribute__((unused))va_list list)
{

	_putchar('%');
	return (1);
}