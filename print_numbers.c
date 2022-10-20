#include "main.h"
/**
 * print_unsigned_integer - prints unsigned integer
 * @n: unsigned integer to print
 * Return: amount of numbers printed
 */
int print_unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	
	if (num == 0)
		return (print_unsigned_integer(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_integer(num));
}
