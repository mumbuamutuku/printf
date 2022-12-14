#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_integer(va_list args);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int (*getfunc(char x))(va_list args);
#endif
