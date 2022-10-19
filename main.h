#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_integer(va_list args);
int parser(const char *format, conver_t f_list[], va_list arg_list);

#endif
