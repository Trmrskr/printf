#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;
	int len2;
	_printf("%c%c%c%c%c%c%c%c%c%c\n", 't', 'a', 'm', 'a', 'r', 'a', 'k', 'u', 'r', 'o');
	printf("%c%c%c%c%c%c%c%c%c%c\n", 't', 'a', 'm', 'a', 'r', 'a', 'k', 'u', 'r', 'o');
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Negative: [%d, %i]\n", len2, len2);
	printf("Negative: [%d, %i]\n", len2, len2);
	_printf("Character: [%c]\n", 'H');
	printf("Character: [%c]\n", 'H');
	len = _printf("String: [%s]\n", "I am a string !");
	len2 = printf("String: [%s]\n", "I am a string !");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);
	len = _printf("Percent: [%%]\n");
	len2 = printf("Percent: [%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");
/*	printf("Unknown:[%r]\n"); */
	return (0);
}
