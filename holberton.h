#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
typedef struct op_func
{
	char *op;
	int (*f)(va_list);
} op_;
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int f_string(va_list);
int f_char(va_list);
int select(const char *format, va_list list, op_ options[]);
int _strlen(char *s);
#endif