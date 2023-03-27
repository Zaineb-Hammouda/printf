#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
int select_f(const char *format, s_printf func_arr[], va_list arg_list);

int print_char(va_list);
int print_num(va_list);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);

/*Helping functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

int _write_char(char);


#endif
