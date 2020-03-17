#include "holberton.h"
/**
 * f_bin - function to convert decimal to binary
 * @list: list type
 * Return: int
 */
int f_bin(va_list list)
{
	int n, bit = 0, i = 0;
	int len = 0;
	char *str;

	n = va_arg(list, int);
	if (n < 0)
		return (-1);
	len = len_num(n, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		len = 1;
	}
	else
	{
		while (n > 0)
		{
			bit = n % 2;
			n =  n / 2;
			str[i] = bit + '0';
			i++;
		}
		rev_string(str);
	}
	for (i = 0 ; i < len; i++)
		_putchar(str[i]);
	free(str);
	return (i);
}
/**
 * f_oct - function to convert decimal to octal
 * @list: list type
 * Return: int
 */
int f_oct(va_list list)
{
	int n, bit = 0, i = 0;
	int len = 0;
	char *str;

	n = va_arg(list, int);
	if (n < 0)
		return (-1);
	len = len_num(n, 8);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		len = 1;
	}
	else
	{
		while (n > 0)
		{
			bit = n % 8;
			n =  n / 8;
			str[i] = bit + '0';
			i++;
		}
		rev_string(str);
	}
	for (i = 0 ; i < len; i++)
		_putchar(str[i]);
	free(str);
	return (i);
}
/**
 * f_hex - function to convert decimal to hexadecimal
 * @list: list type
 * Return: int
 */
int f_hex(va_list list)
{
	int n, mod = 0, copia, len, i = 0;
	char *str;

	n = va_arg(list, int);
	copia = n;
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		len = 1;
	}
	else
	{
		len = len_num(copia, 16);
		str = malloc(sizeof(char) * len);
		if (str == NULL)
			return (-1);
		while (n > 0)
		{
			mod = n % 16;
			n = n / 16;
			if (mod >= 10)
			{
				str[i] = mod + 87;
				i++;
			}
			else
			{
				str[i] = mod + '0';
				i++;
			}
		}
	}
	for (i = len - 1 ; i >= 0; i--)
		_putchar(str[i]);
	free(str);
	return (len);
}
