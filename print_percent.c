#include "main.h"

/**
 * print_percent - prints percent symbols
 * @arg: unused va_list argument
 * @flag: unused flag argument
 * Return: 1
 */

int print_percent(va_list arg __attribute__((unused)), flags flag
__attribute__((unused)))
{
	return (_putchar('%'));
}
