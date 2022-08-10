#include "main.h"

/**
 * _puts - prints the characters in a string
 * @str: string whose character is to be printed
 * Return: length of string
 * 
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
