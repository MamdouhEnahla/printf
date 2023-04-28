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
		print_number(un / 10, call++);
	call += _putchar((un % 10) + 48);

	return (call);
}
