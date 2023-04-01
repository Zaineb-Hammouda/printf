#include "main.h"
/**
 * select_f - select a function
 * @spe: the format specifier in the format string
 * @p: pointer to pointer to function
 * Return: void
 */
void select_f(char spe, int (**p)())
{
	int printed_c = 0;

	if (spe == 'd' || spe == 'i')//if specifier is d or i,
		*p = print_int;//pointer p takes the adress of print_int() function
	else if (spe == 'c')//if specifier is c,
		*p = print_char;//pointer p takes adress of print_char() function
	else if (spe == 's')
		*p = print_str;//we dereferenced once to get to function pointer
	else if (spe == '%')
		*p = print_percent;
	else if (spe == 'b')//go on for as many functions as you have
		*p = print_binary;
	else if (spe == 'r')
		*p = print_reversed;
	else if (spe == 'p')
		*p = print_address;
	else if (spe == 'R')
		*p = rot13;
	else if (spe == 'u')
		*p = unsigned_integer;
	else if (spe == 'o')
		*p = print_octal;
	else if (spe == 'x')
		*p = print_hex;
	else if (spe == 'X')
		*p = print_HEX;
}
