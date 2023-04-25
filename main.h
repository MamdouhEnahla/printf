#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _wrtchar(char c);
int printf_string(va_list vars);
int printf_char(va_list vars);
int printf_percent(void);
#endif
