#include "main.h"
/**
 * _printf - Check code.
 * @format: format
 *
 * Return: No. printed chars or -1.
 */
int _printf(const char * const format, ...)
{
	match m[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_percent},
		{"%d", printf_int},
		{"%i", printf_int},
	};
	va_list args;
	int i = 0, count = 0, j = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		while (m[j].format[0] == format[i] && m[j].format[1] == format[i + 1])
		{
			count += m[j].f(args);
			i += 2;
			break;
		}
		count += _putchar(format[i]);
		i++;
	}

	va_end(args);
	return (count);
}

/**
 * find_match - Finds a match in the match array.
 * @format: Format specifier string.
 * @m: Match array.
 *
 * Return: Index of matching element, or -1 if no match is found.
 */
int find_match(const char *format, match *m)
{
	int i = 0;

	while (m[i].format)
	{
		if (format[0] == m[i].format[0] && format[1] == m[i].format[1])
			return (i);
		i++;
	}
	return (-1);
}
