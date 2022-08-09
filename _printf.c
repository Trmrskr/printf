#include <stdarg.h>
#include "main.h"
/**
 * _printf - clone of the c printf standard library function
 * @format: the string to be formatted to standard output
 * @...: Optional arguments
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, count = 0;
	int (*res_func)(va_list, flags);
	flags flag = {0, 0, 0};

	if (!format)
		return (-1);
	
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = i + 1;
			while (flag_check(format[j], &flag))
				j++;
			res_func = get_print_func(format[j]);

			if (res_func)
			{
				count += res_func(args, flag);
				i = j;
			}
			else{
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);

	return (count);
}
