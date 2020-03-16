#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "holberton.h"
/**
 * _puts - function that prints a string
 * @str: char array pointer
 * Return: number of printed chars
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	if (i == 0)
		return (i);
	return (i - 1);
}

/**
 * _strlen - returns the length of a string
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * len_num - len of a string
 * @n: number
 * @base: base of the number
 * Return: len of the number
 */
int len_num(unsigned int n, unsigned int base)
{
		unsigned int i = 0;

	while (n > 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}
/**
 * rev_string - reverste to a string.
 * @str: string parameter
 */
void rev_string(char *str)
{
int i = 0, j, l;
char b;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	if (i % 2 == 0)
		l = i / 2;
	else
		l = (i / 2) + 1;
	for (j = 0; j < l; j++)
	{
		b = str[i - j];
		str[i - j] = str[j];
		str[j] = b;
	}
	i = 0;

	while (str[i] != '\0')
		i++;
}
