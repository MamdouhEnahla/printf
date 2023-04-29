#include "main.h"

/**
 * print_num - Check code
 * @n: function argument
 * @call: counts function calls
 *
 * Return: number of calls for function
 */
int print_num(int n, int call)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar('-');
		un = -n;
	}
	if (un / 10)
		print_num(un / 10, call++);
	call += _putchar((un % 10) + 48);

	return (call);
}

/**
 * printf_int - writes an integer to the stdout
 * @vars: a va_list containing the integer to print
 *
 * Return: the number of written bytes or -1.
 */
int printf_int(va_list vars)
{
	int n_bytes = 0, num;

	num = va_arg(vars, int);

	n_bytes = print_num(num, n_bytes);

	return (n_bytes);
}
