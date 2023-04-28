#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct match - Specifier
 * @format: format
 * @f: The associated function
 */
typedef struct match
{
	char *format;
	int (*f)(va_list);
} match;

/*=======functions.c========*/
int _putchar(char c);
int printf_string(va_list vars);
int printf_char(va_list vars);
int printf_percent(va_list vars);

/*=======_printf.c=========*/
int _printf(const char *format, ...);

#endif
