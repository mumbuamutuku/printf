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
/**
 * print_op - function to check which specifier to print
 * @format: string being passed
 * @print_arr: array of struct ops
 * @list: list of arguments to print
 * Return: numb of char to be printed
 */
int print_op(const char *format, fmt_t *print_arr, va_list list)
{
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_arr[c].type != NULL &&
			       a != *(print_arr[c].type))
				c++;
			if (print_arr[c].type != NULL)
				count = count + print_arr[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}
