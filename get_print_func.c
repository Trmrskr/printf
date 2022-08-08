#include "main.h"

/**
 * get_print_func - point to the print function corresponding to the format specifier to be printed
 * @s: argument of the get_print_func, takes the format specifier argument
 * @args: the first argument of the function pointed to.
 * @flag: the flag argument of the function pointed to
 */

int (*get_print_func(char s))(va_list arg, flags flag)
{
	int i;
	print_func pf[] = {
		{'c', _putchar},
		{'s', _puts},
		{'%', print_percent}
	}
	i = 0;

	while (pf[i])
	{
		if (s == pf[i].specifier)
			return (pf[i].specifier_func);
		i++;
	}

	return (NULL);
}
