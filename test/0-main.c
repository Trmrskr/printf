#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;
	int len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative: [%d, %i]\n", len2, len2);
	_printf("Character: [%c]\n", 'H');
	_printf("String: [%s]\n", "I am a string !");
	len = _printf("Percent: [%%]\n");
	_printf("Len:[%d]\n");
	_printf("Unknown:[%r]\n");
	return (0);
}
