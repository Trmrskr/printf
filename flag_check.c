#include "main.h"
/**
 * flag - check if a character is a flag character
 * @c: character to be checked
 * @flag: flag structure to be altered
 */

int flag_check(char s, flags *flag)
{
	int i = 0;
	switch (s)
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
