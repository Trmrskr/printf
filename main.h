#ifndef PRINT_F
#define PRINT_F

/**
 * struct flags - declares the flag struct
 * @plus: the plus flag
 * @space: the space flag
 * @hash: the hash flag.
 */

typedef struct flag{
	int plus = 0;
	int space = 0;
	int hash = 0;
} flags;

/**
 * struct print_func - declares a struct which takes a specifier and process it with a function.
 * @specifier: the specifier character
 * @specifier_func: the specifier pointer function that will process the specifier
 */
typedef struct print_function
{
	char specifier;
	int (*specifier_func)(va_list args, flags flag);
} print_func;

int _putchar(va_list arg, flags flag __attribute__((unused)));
#endif /* PRINT_F */
