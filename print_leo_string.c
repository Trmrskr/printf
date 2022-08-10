#include <stdarg.h>
#include "main.h"

/**
 * print_leo_string - print string with unprintable characters
 * @arg: argument of type va_list
 * @flag: argument of type flag
 * Return: number of string printed
 */

int print_leo_string(va_list arg, flags flag __attribute__((unused)))
{
	int count = 0, i = 0;
	char *str = va_arg(arg, char *);
	int xter;
	unsigned long int xterl;

	while (str[i])
	{
		xter = str[i];
		if ((xter >= 0 && xter <= 32) || (xter >= 127))
		{
			xterl = xter;
			count += _putchar('\\');
			count += _putchar('x');

			if (xter <= 9)
			{
				count += _putchar(0 + '0');
				count += hex_digit(xterl, 1);
			}
			else
			{
				count += hex_digit(xterl, 0);
			}
		}
		else
		{
			count += _putchar(xter);
		}
		i++;
	}
	return (count);
}
