#include "main.h"

/**
 * init_flag - a function that initialize flag
 * @flag: the flag struct
 * @plus: the plus flag
 * @space: the space flag
 * @hash: the hash flag
 */

void init_flag(flags *flag, int plus, int space, int hash)
{
	if (flag != NULL)
	{
		flag->plus = plus;
		flag->space = space;
		flag->hash = hash;
	}
}

/**
 * flag_check - if a character is a flag character
 * @c: character to be checked
 * @flag: flag structure to be altered
 * Return: 1 if flags discovered o 0 otherwise
 */

int flag_check(char c, flags *flag)
{
	int i = 0;

	switch (c)
	{
		case '+':
			flag->plus = 1;
			i = 1;
			break;
		case ' ':
			flag->space = 1;
			i = 1;
			break;
		case '#':
			flag->hash = 1;
			i = 1;
			break;
		default:
			i = 0;
	}
	return (i);
}
