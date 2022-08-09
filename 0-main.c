#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;
	int len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%c%c%c%c%c%c%c%c%c%c\n", 't', 'a', 'm', 'a', 'r', 'a', 'k', 'u', 'r', 'o');
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Length: [%d, %i]\n", len2, len2);
	printf("Length: [%d, %i]\n", len2, len2);
	_printf("Negative: [%d]\n", -762534);
	printf("Negative: [%d]\n", -762534);
	_printf("Character: [%c]\n", 'H');
	_printf("String: [%s]\n", "I am a string !");
	len = _printf("Percent: [%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len: [%d]\n", len);
	_printf("Unknown:[%r]\n");
	return (0);
}
