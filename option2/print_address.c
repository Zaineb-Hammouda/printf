#include "main.h"
#include <ctype.h>
/**
 * print_address - prints the adress of a variable
 * @arg_list: the argument list
 * Return: the adress
 */
int print_address(va_list arg_list)
{
	void *p;
	size_t num;

	p = va_arg(arg_list, void*);
	num = (size_t)p;
	_write_char('0');
	_write_char('x');
	return (print_hexa(num));
	/*if (isprint(va_arg(arg_list, int)))
	{
		c = va_arg(arg_list, int);
		p = &c;
		num = (size_t)p;
		return (print_hexa(num));
	}
	else if (va_arg(arg_list, int))
	{
		n = va_arg(arg_list, int);
		p = &n;
		num = (size_t)p;
		return (print_hexa(num));
	}
	else if (va_arg(arg_list, char*))
	{
		s = va_arg(arg_list, char*);
		p = s;
		num = (size_t)p;
		return (print_hexa(num));
	}*/
}
