#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * octal_digit - prints the binary digit of a number
 * @n: the number
 * Return: count of the binary digit
 */

int octal_digit(unsigned int n)
{
	int count = 0;
	unsigned int num = n;

	if (num == 0)
		return (0);

	count = 1 + octal_digit(num / 8);
	_putchar((n % 8) + '0');
	return (count);
}

/**
 * print_octal - a function to print octal numbers
 * @arg: an argument of type va_list
 * @flag: an argument of type flag
 * Return: count of digit printed
 */

int print_octal(va_list arg, flags flag)
{
	int count = 0;
	unsigned int n = va_arg(arg, unsigned int);

	if (n != 0 && flag.hash == 1)
		count = _putchar('0');

	count += octal_digit(n);
	return (count);
}
