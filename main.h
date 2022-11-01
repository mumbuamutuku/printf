#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct convert - convert
* @sym: the valid symbol
* @f: the function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_integer(va_list args);
int parser(const char *format, conver_t f_list[], va_list args);
int printbinary(va_list args);
int print_number(va_list args);
int print_unsigned_integer(va_list args);
int print_octals(va_list args);
int print_bigS(va_list args);
int print_reversed(va_list args);
int rot13(va_list);
int print_op(const char *format, fmt_t *print_arr, va_list list);

/*helper_functions*/
int print_unsigned_number(unsigned int);
unsigned int base_len(unsigned int, int);
void write_base(char *str);
char *rev_string(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_hex(va_list args);
int print_bighex(va_list args);
char *convert(unsigned long int num, int base, int lowercase);
int print_octal(va_list args);
int print_hexalow(va_list args);
int print_hexaup(va_list args);
int print_unsig(va_list arg);
#endif
