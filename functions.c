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
 *
 * Return: 1 for success.
 */
int printf_percent(void)
{
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
	int length = 0, i;
	char *str;

	str = va_arg(vars, char *);

	if (!str)
	{
		str = "(null)";
	}
	for (i = 0; i < length; i++)
		length += _putchar(str[i]);

	return (length);
}

/**
 * printf_int - writes an integer to stdout
 * @args: a va_list containing the integer to print
 *
 * Return: No. bytes written, or -1.
 */
int printf_int(va_list args)
{
	int count = 0;
	int n = va_arg(args, int);
	unsigned int unum = n;

	if (n < 0)
	{
		count += _putchar('-');
		unum = -n;
	}
	if (unum / 10)
		printf_int(unum / 10);
	count += _putchar((unum % 10) + 48);

	return (count);
}
