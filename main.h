#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flag_s - declares the flag struct
 * @plus: the plus flag
 * @space: the space flag
 * @hash: the hash flag.
 */

typedef struct flag_s
{
	int plus;
	int space;
	int hash;
} flags;

/**
 * struct print_function - declares a struct which takes a specifier and
 * process it with a function.
 * @specifier: the specifier character
 * @specifier_func: the specifier pointer function that will process the
 * specifier
 */

typedef struct print_function
{
	char specifier;
	int (*specifier_func)(va_list arg, flags flag);
} print_func;

void init_flag(flags *, int, int, int);
int _putchar(char);
int print_char(va_list arg, flags flag __attribute__((unused)));
int flag_check(char s, flags *flag);
int (*get_print_func(char c))(va_list arg, flags flag);
int _printf(const char *format, ...);
int _puts(char *);
int print_string(va_list arg, flags flag __attribute__((unused)));
int print_percent(va_list __attribute__((unused)), flags flag);
int print_int(va_list arg, flags flag);

#endif /* PRINT_F */
