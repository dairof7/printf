#include "holberton.h"
/**
 * f_bin - function to convert decimal to binary
 * @list: list type
 * Return: numbert of printed chars
 */
int f_bin(va_list list)
{
	unsigned int i = 0;
	unsigned int n, bit = 0, len = 0;
	char *str;

	n = va_arg(list, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		len = 1;
		return (len);
	}
	len = len_num(n, 2);
	if (len == 0)
		return (-1);
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (-1);
	while (n > 0)
	{
		bit = n % 2;
		n =  n / 2;
		str[i] = bit + '0';
		i++;
	}
	rev_string(str);
	for (i = 0 ; i < len; i++)
		_putchar(str[i]);
	free(str);
	return (i);
}
/**
 * f_oct - function to convert decimal to octal
 * @list: list type
 * Return: number of printed chars
 */
int f_oct(va_list list)
{
	unsigned int n, bit = 0, i = 0;
	unsigned int len = 0;
	char *str;

	n = va_arg(list, int);
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
 * Return: number of printed chars
 */
int f_hex(va_list list)
{
	unsigned int n, mod = 0, copia;
	unsigned int len, i = 0;
	char *str;

	n = va_arg(list, int);
	copia = n;
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
		rev_string(str);
	}
	for (i = 0 ; i < len; i++)
		_putchar(str[i]);
	free(str);
	return (len);
}
/**
 * f_heX - function to convert decimal to hexadecimal, uppercase
 * @list: list type
 * Return: number of printed chars
 */
int f_heX(va_list list)
{
	unsigned int n, mod = 0, copia;
	unsigned int len, i = 0;
	char *str;

	n = va_arg(list, int);
	copia = n;
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
				str[i] = mod + 55;
				i++;
			}
			else
			{
				str[i] = mod + '0';
				i++;
			}
		}
		rev_string(str);
	}
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	free(str);
	return (len);
}
/**
 * f_rot13 - function to convert decimal to hexadecimal, uppercase
 * @list: list type
 * Return: len of string
 */
int f_rot13(va_list list)
{
	int len = 0;
	int i, j;
	char *t = va_arg(list, char *);

	char p[] = {"\n!_ ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[] = {"\n!_ NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (t[i] == p[j])
			{
				len = len + _putchar(n[j]);
				break;
			}
		}
	}

	return (len);
}
