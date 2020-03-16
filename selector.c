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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (options[j].op)
			{
				if (format[i + 1] == options[j].op[0])
				{
					nchar += options[j].f(list);
					i++;
					break;
					}
				j++;
				}
			}
			else
			{
				_putchar(format[i]);
				nchar++;
			}
	}
	return (nchar);
}
