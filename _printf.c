#include "main.h"
/**
 * _printf - receives the main string and all the requisite parameters to
 * print a formated string
 * @format: a string containing all the desired characters
 * Return: total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_integer},
		{"b", printbinary},
		{"u", print_unsigned_integer},
		{"o", print_octals},
		{"x", print_hexalow},
		{"X", print_hexaup},
		{"S", print_bigS},
		{"r", print_reversed},
		{"R", rot13},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	printed_chars = parser(format, f_list, args);
	va_end(args);
	return (printed_chars);
}
