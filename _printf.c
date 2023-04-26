#include "main.h"

/**
 * _printf - Check code.
 * @format: format
 *
 * Return: No. printed chars or -1.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char *ptr;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	ptr = (char *)format;

	while (*ptr)
	{
		if (*ptr != '%')
		{
			count += _putchar(*ptr);
		}
		ptr++;

		count += get_printf(ptr, args);
		ptr++;
	}
	va_end(args);

	return (count);
}
