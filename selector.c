#include "holberton.h"
/**
 * select_ -  select the type of function.
 * @format: first argumento of printf, s a character string
 * @list: list of arguments - variables  to print
 * @options: the struct with the char options and function pointers
 * Return: return the number of printer chars
 */
int select_(const char *format, va_list list, op_ options[])
{
	int i = 0, j = 0, nchar = 0;

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
			_putchar(format[i]), nchar++;
		if (!format[i])
			return (nchar);
		for (j = 0; options[j].op != NULL; j++)
		{
			if (format[i + 1] == ' ')
			{
				_putchar(format[i + 1]);
				nchar++;
				i++;
			}
			if (format[i + 1] == ' ')
				return (-1);
			if (format[i + 1] == options[j].op[0])
			{
				nchar += options[j].f(list);
				i += 2;
				break;
			}
		}
		if (options[j].op == NULL)
		{
			_putchar(format[i]);
			i++;
			nchar++;
		}
	}
	return (nchar);
}
