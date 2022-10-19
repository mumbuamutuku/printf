#include "main.h"
/**
* print_char - prints character
* @args: character argument
* Return: number of characters
*/
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
