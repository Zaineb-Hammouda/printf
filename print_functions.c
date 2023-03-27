#include "main.h"

/**
 * print_char - prints a character to stdout
 * @arg_list: list of arguments sent to printf
 * Return: 1
 */
int print_char(va_list arg_list)
{
	_write_char(va_arg(arg_list, int));
	return (1);
}

/**
 * print_str - prints a string to stdout
 * @arg_list: list of arguments sent to printf
 * Return: number of printed characters
 */
int print_str(va_list arg_list)
{
	int i;
	char *s;

	s = va_arg(arg_list, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_write_char(s[i]);
	}
	return (i);
}

/**
 * print_percent - prints % to stdout
 * @arg_list: list of arguments sent to printf
 * Return: 1
 */
int print_percent(__attribute__((unused))va_list arg_list)
{
	_write_char('%');
	return (1);
}

/**
 * print_int - calls print num function
 * @arg_list: list of arguments sent to printf
 * Return: length of a number
 */

int print_int(va_list arg_list)
{
	int len;

	len = print_num(arg_list);
	return (len);
}

