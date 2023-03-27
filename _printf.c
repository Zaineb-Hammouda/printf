#include "main.h"

/**
 * _printf - prints formatted text to stdout
 * Return: number of printed chars or -1 if it fails
 * @format: string input
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	s_printf func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	printed_chars = select_f(format, func_arr, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
