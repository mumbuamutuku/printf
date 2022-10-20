#include "main.h"
/**
 * _printf - receives the main string and all the requisite parameters to
 * print a formated string
 * @format: a string containing all the desired characters
 * Return: total count of the characters printed
 */
int (*getfunc(char x))(va_list)
{
	int i = 0;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_integer},
		{NULL, NULL}
	};
	while (f_list[i].sym)
	{
		if (x == f_list[i].sym[0])
			return (f_list[i].f);
		i++;
	}
	return (NULL);
}
