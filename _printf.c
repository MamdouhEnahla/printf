#include "main.h"

/**
 * _printf - Prints formatted output.
 * @format: Format string.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int _printf(const char * const format, ...)
{
	match m[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_percent},
		{NULL, NULL}
	};
	va_list arg;
	int i = 0, count = 0, match_idx;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			match_idx = find_match(format + i, m);
			if (match_idx >= 0)
			{
				count += m[match_idx].f(arg);
				i += 2;
				continue;
			}
		}
		count += _putchar(format[i]);
		i++;
	}

	va_end(arg);
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
