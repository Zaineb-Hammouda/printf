#include "main.h"

/**
 * _printf - prints formatted text to stdout
 * Return: number of printed chars or -1 if it fails
 * @format: string input
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0, i, retrn;
	char spe;
	int (*p)(va_list) = NULL;

	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);

	for (i = 0; format[i] != '\0'; i++)
		if (format[i] == '%')
		{
			spe = format[i + 1];
			select_f(spe, &p);
			retrn = (*p)(arg_list);
			if (retrn == -1)
				return (-1);
			printed_chars += retrn;
			i++;
		}
		else
		{
			_write_char(format[i]);
			printed_chars++;
		}
	va_end(arg_list);
	return (printed_chars);
}
