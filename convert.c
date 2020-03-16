#include "holberton.h"

int f_bin(va_list list)
{
	int n, bit=0, i=0;
	int len=0;
	char *str;
	n = va_arg(list, int);
	if (n < 0)
		return (-1);
	len = len_num (n, 2);
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
		while(n>0)
		{	
			bit = n % 2;
			n =  n / 2;
			str[i] = bit+'0';
			i++;
		}
		rev_string(str);
	}
	for (i = 0 ; i < len; i++)
		_putchar(str[i]);
	free(str);
	
	return (i);
}