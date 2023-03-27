#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 25;
	char c = 'f';
	char* s = "hello";
	void *p = &n;

	_printf("adress of n = %p\n", &n);
	printf("adress of n = %p\n", p);
	_printf("adress of char c = %p\n", &c);
	printf("adress of char c = %p\n", &c);
	_printf("adress of string s = %p\n", s);
	printf("adress of string s = %p\n", s);
	return (0);
}
