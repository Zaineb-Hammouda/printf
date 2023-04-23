#include "main.h"
#include <stdlib.h>

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg_list: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list arg_list)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg_list, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write_char(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - rotates string of letters by 13 chars
 * @arg_list: string to convert
 * Return: converted string
 */
int rot13(va_list arg_list)
{
	int i;
	int y;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg_list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (y = 0; y <= 52; y++)
		{
			if (str[i] == s[y])
			{
				_write_char(rot[y]);
				break;
			}
		}
		if (y == 53)
			_write_char(str[i]);
	}
	return (i);
}
