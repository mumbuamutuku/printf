#include "main.h"
/**
*printbinary - convert binary
*@args : unsigned integer input
*Return: no return
*/
int printbinary(va_list args)
{
	unsigned int c;
	int i, j;
	int a[100];

	c = va_arg(args, int);
	i = 0;
	if (c == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (c > 0)
	{
		a[i] = c % 2;
		c = c / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(a[j] + '0');
	return (i);
}
/**
 * print_unsigned_integer - prints Unsigned integers
 * @args: list of all of the argumets
 * Return: count of the numbers
 */
int print_unsigned_integer(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
/**
 * print_octal - prints numeric representation of a number in octal base
 * @args: list of all the arguments passed to the program
 * Return: number of symbols printed to stdout
 */
int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}
