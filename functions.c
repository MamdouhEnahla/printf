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
 * Return: for success return the number of bytes written, -1 Otherwise.
 */
int printf_string(va_list vars)
{
	int length, i;
	char *str;

	str = va_arg(vars, char *);

	if (str == NULL)
	{
		str = "(null)";
		length = strlen(str);

		for (i = 0; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		length = strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
	}
	return (length);
}

/**
 * printf_int - writes an integer to stdout
 * @args: a va_list containing the integer to write
 *
 * Return: 1 for success
 */
int printf_int(va_list args)
{
	long n = va_arg(vars, long);
	unsigned long int un = n;

	if (n < 0)
	{
		_putchar('-');
		un = -n;
	}
	if (un / 10)
		printf_int(un / 10);
	_putchar((un % 10) + 48);
}
