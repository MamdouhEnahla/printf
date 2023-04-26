#include "main.h"

/**
 * _specifier - determines the format function
 * @frmt: format
 *
 * Return: the associated function or NULL.
 */
int (*_specifier(char *frmt))(va_list args)
{
	int i = 0;
	specifier_t specifiers[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_int},
		{"i", printf_int}
	};

	while (specifiers[i].specifier)
	{
		if (*frmt == specifiers[i].specifier[0])
		{
			return (specifiers[i].fn);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_printf - determines the print func
 * @frmt: the format
 * @args: array of args
 *
 * Return: the function or 0.
 */
int get_printf(char *frmt, va_list args)
{
	int (*fn)(va_list) = _specifier(frmt);

	if (fn)
		return (fn(args));
	return (0);
}