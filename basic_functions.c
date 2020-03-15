#include <unistd.h>

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
 *
 */

int _puts(char *str)
{
	int i=0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(i-1);
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
