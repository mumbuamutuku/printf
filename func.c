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
/**
* print_string -priints striing
* @args: string argument
* Return: number of characters
*/
int print_string(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		absolute = (n * -1);
		count += _putchar('-');
	}
	else
		absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
* print_integer - prints integer
* @args: integer argument
* Return: the decimal function
*/
int print_integer(va_list args)
{
	return (print_d(args));
}
