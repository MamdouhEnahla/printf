#include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @c: The character to print
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printf_char - writes a character to stdout
 * @vars: a va_list containing the character to write
 *
 * Return: 1 for success.
 */
int printf_char(va_list vars)
{
	char ch;

	ch = va_arg(vars, int);
	_putchar(ch);
	return (1);
}

/**
 * printf_percent - writes the percent sign to stdout
 * @vars: a parameter aligned with the struct param type
 * Return: 1 for success.
 */
int printf_percent(va_list vars)
{
	(void) vars;
	_putchar(37);
	return (1);
}

/**
 * printf_string - writes a string to stdout
 * @vars: a va_list containing the string to write
 *
 * Return: the number of bytes written, or -1.
 */
int printf_string(va_list vars)
{
	int length, i;
	char *str;

	str = va_arg(vars, char *);

	if (!str)
		str = "(null)";
	length = 0;
	for (i = 0; str[i]; i++)
		length += _putchar(str[i]);

	return (length);
}

/**
 * printf_int - writes an integer to the stdout
 * @vars: a va_list containing the integer to print
 *
 * Return: the number of written bytes or -1.
 */
int printf_int(va_list vars)
{
	int i = 0, n_bytes = 0, num;

	num = va_arg(vars, int);

	n_bytes = print_num(num, n_bytes);

	return (n_bytes);
}
