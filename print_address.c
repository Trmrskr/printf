#include "main.h"
#include <stdarg.h>

/**
 * print_address - the content of a given address pointer
 * @arg: address argument of type va_list
 * @flag: flag
 * Return: count
 */

int print_address(va_list arg, flags flag __attribute__((unused)))
{
	int count = 0;

	unsigned long int address = va_arg(arg, unsigned long int);

	count += _puts("0x");
	count += hex_digit(address, 1);
	return (count);
}
