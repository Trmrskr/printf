#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * hex_digit - prints the binary digit of a number
 * @n: the number
 * @small: flag for small or big hexadecimal
 * Return: count of the binary digit
 */

int hex_digit(unsigned long int n, int small)
{
	int count = 0;
	int mod;
	unsigned long int num = n;
	char *small_hex = "0123456789abcdef";
	char *big_hex = "0123456789ABCDEF";

	if (num == 0)
		return (0);

	count = 1 + hex_digit(num / 16, small);
	mod = n % 16;

	if (small)
		_putchar(small_hex[mod]);
	else
		_putchar(big_hex[mod]);


	return (count);
}

/**
 * print_small_hex - a function to print small numbers
 * @arg: an argument of type va_list
 * @flag: an argument of type flag
 * Return: count of digit printed
 */

int print_small_hex(va_list arg, flags flag)
{
	int count = 0;
	unsigned long int n = va_arg(arg, unsigned int);

	if (n != 0 && flag.hash == 1)
		count = _puts("0x");

	count += hex_digit(n, 1);
	return (count);
}
/**
 * print_big_hex - a function to print big hexadecimals
 * @arg: an argument of type va_list
 * @flag: an argumen of type flag
 * Return: count of digit printed
 */

int print_big_hex(va_list arg, flags flag)
{
	int count = 0;
	unsigned long int n = va_arg(arg, unsigned int);

	if (n != 0 && flag.hash == 1)
		count = _puts("0X");

	count += hex_digit(n, 0);
	return (count);
}
