#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

void select_f(char spe, int (**p)());

int print_char(va_list);
int print_num(va_list);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_address(va_list);

/*Helping functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

/* functions to print an adress or pointer */
int print_hexa(size_t num);
int hex_checker(int num, char x);

int _write_char(char);


#endif
