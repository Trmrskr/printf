#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * unsigned_digit - prints the digit of an unsigned integer
 * @n: unsigned integer
 * Return: count of digit printed
 */

int unsigned_digit(unsigned int n)
{
	int count = 0;

	if (n == 0)
		return (0);
	count = 1 + unsigned_digit(n / 10);
	_putchar((n % 10) + '0');
	return (count);
}

/**
 * print_unsigned - print unsigned numbers
 * @arg: unsigend number
 * @flag: flag
 * Return: count of digits printed
 */

int print_unsigned(va_list arg, flags flag)
{
	int count = 0;
	long num = va_arg(arg, long);
	unsigned int number;

	if (num < 0)
		num = UINT_MAX + (num + 1);
	if (num > UINT_MAX)
		num = UINT_MAX;

	number = num;

	if (flag.space == 1 && num > 0)
		count += _putchar(' ');

	count = unsigned_digit(number);

	return (count);
}
