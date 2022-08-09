#include <stdarg.h>
#include "main.h"

void print_digit(int);
int count_digit(int);

/**
 * print_int - print integers both positive and negative using print_digit
 * @arg: number to be printed
 * @flag: flag
 * Return: count of digits printed, sign inclusive
 */

int print_int(va_list arg, flags flag)
{
	int n = va_arg(arg, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		count = 1;
	}

	if (flag.space == 1 && flag.plus == 0 && n >= 0)
		count += _putchar(' ');
	if (flag.plus == 1 && n >= 0)
		count += _putchar('+');

	print_digit(n);
	count += count_digit(n);

	return (count);
}

/**
 * print_digit - print the digit of the number
 * @n: number whose digits are to be printed
 */

void print_digit(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	print_digit(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * count_digit - count the digit in an integer number
 * @n: number which digits are to be counted
 * Return: the number of digits
 */

int count_digit(int n)
{
	if (n == 0)
		return (0);
	return (1 + count_digit(n / 10));

}
