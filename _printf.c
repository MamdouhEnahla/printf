#include "main.h"

<<<<<<< HEAD

int _printf(const char *format, ...)
{
    int i, j, length;
    va_list ar;

    match m[] = {
		{"%s",printf_string}, 
        {"%c",printf_char}
	};
    va_start(ar, format);
    if (!format || ((format[0] == '%') && (!format[1])))
        return (-1);
    length = 0, i = 0, j = 0;
    while (format[i])
    {
        while (j < 3)
        {
                if (format[i] == m[j].format[0] && format[i + 1] == m[j].format[1])
                {
                    length = length + m[j].f(ar);
                    i += 2;     
                    break;
                }
                j++;
        }
        _wrtchar(format[i]);
        length ++;
        i++;
    }
        va_end(ar);
        return (length);
=======
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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	// count++ case
	va_end(args);

	return (count);

>>>>>>> a548dc4 (task0-1)
}
