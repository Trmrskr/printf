#include "main.h"

/**
 * get_print_func - point to the print function corresponding to the format
 * specifier to be printed
 * @c: argument of the get_print_func, takes the format specifier argument
 * Return: returns a function if successful or NULL otherwise
 */


int (*get_print_func(char c))(va_list arg, flags flag)
{
	int i;
	print_func pf[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int}
	};
	i = 0;

	while (pf[i].specifier)
	{
		if (c == pf[i].specifier)
			return (pf[i].specifier_func);
		i++;
	}

	return (NULL);
}
