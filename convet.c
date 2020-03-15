#include "holberton.h"

int f_bin(va_list list)
{
	int n, bit, i=0, len;
	char *str;
	n = va_arg(list, int);
	len = len_num (n, 2);
	str = malloc(sizeof(char) * len + 1);
	while(n>0)
	{
		bit = n % 2;
		n =  n / 2;
		str[i] = bit;
		//printf("<%d>",n);
		i++;

	}
	str=rev_string(str);
	for (i = 0 ; i < len; i++)
		_putchar(str[i] + '0');
	return (i);
}