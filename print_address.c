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
	void *address = va_arg(arg, void *);
	char *addr = (char *)address;

	return (_puts(addr));
}
