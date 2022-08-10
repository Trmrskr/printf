#include <stdarg.h>
#include "main.h"

/**
 * _strlen - calculates the length of string
 * @s: string whose length is to be returned
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * rev_string - reverses a string
 * @arg: argumen to type va_list
 * @flag: flag
 * Return: the count of string printed
 */

int rev_string(va_list arg, flags flag __attribute__((unused)))
{
	char *str = va_arg(arg, char *);
	int len, count = 0, i = 0;

	if (str == NULL)
	{
		str = ")llun(";
	}

	len = _strlen(str) - 1;

	for (i = len; i >= 0; i--)
		count += _putchar(str[i]);

	return (count);
}
