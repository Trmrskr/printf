#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
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
	_printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len);
	len = _printf("Unknown:[%r]\n", "Good");
	_printf("Length:[%i]\n", len);
	len = _printf("Binary: [%b]\n", 98);
	len2 = _printf("Binary: [%b]\n", 252);
	_printf("Length: [%i]\n", len);
	_printf("Length: [%i]\n", len2);

	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned: [%u]\n", ui);
	printf("Unsigned: [%u]\n", ui);
	len = _printf("Octal: [%o]\n", ui);
	len2 = printf("Octal: [%o]\n", ui);
	printf("Length: [%i]\n", len);
	_printf("Length: [%i]\n", len2);
	len = _printf("Hexadecimal: [%x]\n", ui);
	len2= printf("Hexadecimal: [%x]\n", ui);
	_printf("Length: [%d]\n", len);
	printf("Length: [%d]\n", len2);
	len = _printf("Hexadecimal: [%X]\n", ui);
	len2= printf("Hexadecimal: [%X]\n", ui);
	_printf("Length: [%d]\n", len);
	printf("Length: [%d]\n", len2);
	len = _printf("%S is ALX\n", "Best\nSchool");
	_printf("%d\n", len);
	addr = (void *)0x77ffe637541f0;
	len = _printf("Address: [%p]\n", addr);
	_printf("Length: [%i]\n", len);
	_printf("Unknown:[%r]\n", "This is a string");
	len = _printf("Rot13'd string: [%R]\n");
	_printf("Length: [%i]\n", len);
	return (0);
}
