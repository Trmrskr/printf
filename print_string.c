#include "main.h"

/**
 * print_string - takes a va_list argument and print
 * @va_list: string to be printed
 * @flag: flag character
 */

int print_string(va_list arg, flags flag __attribute__((unused)))
{
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(null)";

	return (_puts(str));
}
