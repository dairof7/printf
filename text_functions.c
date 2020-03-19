#include "holberton.h"
/**
 * f_char - print a simple char.
 * @list: va_list of arguments
 * Return: rerturn number of printed chars
 */
int f_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * f_string - print a sstring.
 * @list: va_list of arguments
 * Return: rerturn number of printed chars
 */
int f_string(va_list list)
{
	int lens;
	char *s = va_arg(list, char *);

	lens = 0;
	if (s == NULL)
	{
		lens = lens + _puts("(null)");
		return (lens);
	}
	while (s[lens])
		lens = lens + _putchar(s[lens]);

	return (lens);
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
/**
 * f_rev - print a string in reverse
 * @list: va_list of arguments
 * Return: return the len of the printed string
 */
int f_rev(va_list list)
{
	int i = 0, len = 0;
	char *str = va_arg(list, char *);

	while (str[i] != '\0')
		i++;
	len = i;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (len);
}
