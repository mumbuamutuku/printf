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
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
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
<<<<<<< HEAD

/**
* print_integer - prints integer
* @args: integer argument
* Return: the decimal function
*/
int print_integer(va_list args)
{
	return (print_d(args));
=======
/**
 * unsigned_integer - prints unsigned integers
 * @args: list of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
>>>>>>> 48f7aa13c09604e215a7e135088dca4e23127856
}
