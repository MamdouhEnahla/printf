#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct specifier - Specifier
 * @specifier: format
 * @fn: The associated function
 */
typedef struct specifier
{
	char *specifier;
	int (*fn)(va_list);
} specifier_t;

/*=======functions.c========*/
int _putchar(char c);
int printf_string(va_list vars);
int printf_char(va_list vars);
int printf_percent(void);
int printf_int(va_list args);

/*=======specifier.c========*/
int (*_specifier(char *frmt))(va_list args);
int get_printf(char *frmt, va_list args);

/*=======_printf.c=========*/
int _printf(const char *format, ...);

#endif
