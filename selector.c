#include "holberton.h"
#include <stdio.h>
int select(const char *format, va_list list, op_ options[])

{
	int i = 0, j = 0, nchar = 0;
	
	for (i = 0; format[i] != '\0'; i++)
	{
	//	printf("1");
		if (format[i] == '%')
			{
	//			printf("2");
				j = 0;
				while (options[j].op)
				{
	//				printf("3");
					if (format[i+1] == options[j].op[0])
					{
						nchar += options[j].f(list);
						i++;
						//printf("4");
						break;
					}
					j++;
				}
			}
			else
		_putchar(format[i]);
		nchar++;
	}		
	return(nchar);
}