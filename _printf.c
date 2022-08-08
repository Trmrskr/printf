#include <stdargs.h>
#include "main.h"
/**
 * _printf - clone of the c printf standard library function
 * @format: the string to be formatted to standard output
 * @...: Optional arguments
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, res = 0, count = 0;
	flags flag;

	if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = i + 1;
			while (flag_check(format[j], &flag))
				j++;
			res += get_print_func(format[j])(va_args(args), flag);
			if (!res)
				return (-1);
			i = j;
			count += res;
		}
		else
		{
			count += _putchar(format[i])
		}
		i++;
	}

	return (count);
}
