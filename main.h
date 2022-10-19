#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_integer(va_list args);

#endif
