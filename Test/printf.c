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

		{NULL, NULL}

	};

	va_list arg;



	if (format == NULL)

		return (-1);



	va_start(arg, format);



	printed_chars = parser(format, f_list, arg);

	va_end(arg);

	return (printed_chars);

}
