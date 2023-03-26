#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _write_char - prints a character to stdout
 * @c: char to print
 * Return: the printed char
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

