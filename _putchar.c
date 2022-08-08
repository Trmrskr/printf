#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar (va_list arg, flags flag __attribute__((unused)))
{
    char c = va_arg(arg, char);
    write(1, &c, 1);
    return (1);
}