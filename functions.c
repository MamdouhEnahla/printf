#include "main.h"

/**
 * _wrtchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: Upon successful completion, return the number of bytes written.
 *         Otherwise, return -1.
 */
int _wrtchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printf_char - writes a character to stdout
 * @vars: a va_list containing the character to write
 *
 * Return: Upon successful completion, return the number of bytes written.
 *         Otherwise, return -1.
 */
int printf_char(va_list vars)
{
	char s;

	s = va_arg(vars, int);
	_wrtchar(s);
	return (1);
}

/**
 * printf_percent - writes the percent sign to stdout
 *
 * Return: Upon successful completion, return the number of bytes written.
 *         Otherwise, return -1.
 */
int printf_percent(void)
{
	_wrtchar(37);
	return (1);
}

/**
 * printf_string - writes a string to stdout
 * @vars: a va_list containing the string to write
 *
 * Return: Upon successful completion, return the number of bytes written.
 *         Otherwise, return -1.
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
			_wrtchar(str[i]);
	}
	else
	{
		length = strlen(str);
		for (i = 0; i < length; i++)
			_wrtchar(str[i]);
	}
	return (length);
}

