#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_digit - prints the binary digit of a number
 * @n: the number
 * Return: count of the binary digit
 */

int binary_digit(unsigned long n)
{
	int count = 0;
	unsigned long num = n;

	if (num == 0)
		return (0);

	count = 1 + binary_digit(num / 2);
	_putchar((n % 2) + '0');
	return (count);
}

/**
 * print_binary - a function to print binary numbers
 * @arg: an argument of type va_list
 * @flag: an argument of type flag
 * Return: count of digit printed
 */

int print_binary(va_list arg, flags flag __attribute__((unused)))
{
	unsigned long n = va_arg(arg, int);

	return (binary_digit(n));
}
