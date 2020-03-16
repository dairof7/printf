#include "holberton.h"
/**
 * f_char - print a simple char.
 * @list: va_list of arguments
 * Return: rerturn number of char
 */
int f_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * f_string - print a sstring.
 * @list: va_list of arguments
 * Return: rerturn number of char
 */
int f_string(va_list list)
{
	return (_puts(va_arg(list, char *)));
}
/**
 * f_perc - print percent symbol.
 * @list: va_list of arguments
 * Return: rerturn number of char
 */
int f_perc(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
