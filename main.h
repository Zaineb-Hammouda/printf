#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct s_printf - defines a structure for symbols and functions
 * @spe_c: The operator
 * @func: The function associated
 */

typedef struct s_printf
{
	char *spe_c;
	int (*func)(va_list);
} s_printf;

int _printf(const char *format, ...);

int print_char(va_list);
int print_num(long int n);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);

int _write_char(char);

int select_f(const char *format, s_printf func_arr[], va_list arg_list);

#endif
