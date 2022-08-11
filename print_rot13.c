#include <stdarg.h>
#include "main.h"

/**
 * print_rot13 - print rot13 cipher of a string
 * @arg: argument of type va_list
 * @flag: argument of type flag
 * Return: count of character printed
 */

int print_rot13(va_list arg, flags flag __attribute__((unused)))
{
	int i = 0, count = 0;
	char xter;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(avy)";

	while (str[i])
	{
		xter = str[i];

		if ((xter >= 'a' && xter <= 'm') || (xter >= 'A' && xter <= 'M'))
		{
			count += _putchar(xter + 13);
		}
		else if ((xter >= 'n' && xter <= 'z') || (xter >= 'N' && xter <= 'Z'))
		{
			count += _putchar(xter - 13);
		}
		else
		{
			count += _putchar(xter);
		}
		i++;
	}
	return (count);
}
