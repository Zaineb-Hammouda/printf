#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int a = 85, b = 1587;
	char c = 'f';
	char *s = "hello";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("int a+b:[%d]\n", a + b);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", c);

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", s);
	_printf("String:[%s]\n", "ITS WORKING YA SIRINE");
	_printf("String:[%s]\n", "ITS WORKING YA ZAINEB");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	_printf("hey %d and %i go %s %c", a, b, s, c);
	return (0);
}
