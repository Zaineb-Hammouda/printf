#include "main.h"

int hex_check(int, char);

/**
 * print_binary - Converts a number to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_octal - Prints the representation of a number in octal base
 * @list: List of all the arguments passed to the program
 * Return: Number of chars printed
 */
int print_oct(va_list list)
{
	unsigned int num;
	int len;
	char *octal;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal[len] = (num % 8) + 48;
		num = num / 8;

	}
	octal[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal);
	free(rev_str);
	return (len);
}

/**
 * print_hex - Prints a representation of a number on base16 lowercase
 * @list: List of the arguments passed to the function
 * Return: Number of chars printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int len;
	int remainder;
	char *hex;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		remainder = num % 16;
		if (remainder > 9)
		{
			remainder = hex_check(remainder, 'x');
			hex[len] = remainder;
		}
		else
			hex[len] = remainder + 48;
		num = num / 16;
	}
	hex[len] = '\0';
	rev_hex = rev_string(hex);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex);
	free(rev_hex);
	return (len);
}


/**
 * print_HEX - Prints a representation of a number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of chars printed
 */
int print_HEX(va_list list)
{
	unsigned int num;
	int len;
	int remainder;
	char *hex;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		remainder = num % 16;
		if (remainder > 9)
		{
			remainder = hex_check(rem_num, 'X');
			hex[len] = remainder;
		}
		else
			hex[len] = remainder + 48;
		num = num / 16;
	}
	hex[len] = '\0';
	rev_hex = rev_string(hex);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it (HEX or hex)
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
