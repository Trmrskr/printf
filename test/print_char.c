#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints characters using _putchar
 * args: take argument of type va_list
 * flag: takes a flag argument unused
 * Return: 1
 */

int print_char(va_list arg, flags flag __attribute__((unused)))
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}
