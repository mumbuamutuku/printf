#include "main.h"
/**
 * print_unsig - print unsigned numbers
 * @arg: number to print
 * Return: @count, number or chars printed.
 */
int print_unsig(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int)
	int count = 0;
	unsigned int num_copy = n;

	if (n == 0)
		count = 1;
	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
	if (n >= 10)
		print_unsig(n / 10);
	_putchar (n % 10 + '0');
	return (count);
}
/**
 * print_hexalow - convert unsigned int in hexadecimal
 *@args: unsigned int
 * Return: numer times print
 */
int print_hexalow(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, remainder, count = 0;
	unsigned int num_copy = n;
	char *hexadecimal;

	if (n == 0)
		return (_putchar('0'));
	while (num_copy != 0)
	{
		num_copy /= 16;
		count++;
	}
	hexadecimal = malloc(count);
	for (i = 0; n != 0; i++)
	{
		remainder = 0;
		remainder = n % 16;
		if (remainder < 10)
		{
			hexadecimal[i] = remainder + '0';
		}
		else
		{
			hexadecimal[i] = remainder + 'W';
		}
		n /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexadecimal[j]);
	free(hexadecimal);
	return (count);
}
/**
 * print_hexaup - Print number in hexadecimal with upper numbers
 *@args: unsigned int
 * Return: numer times print
 */
int print_hexaup(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, remainder, count = 0;
	unsigned int num_copy = n;
	char *hexadecimal;

	if (n == 0)
		return (_putchar('0'));
	while (num_copy != 0)
	{
		num_copy /= 16;
		count++;
	}
	hexadecimal = malloc(count);
	for (i = 0; n != 0; i++)
	{
		remainder = 0;
		remainder = n % 16;
		if (remainder < 10)
		{
			hexadecimal[i] = remainder + '0';
		}
		else
		{
			hexadecimal[i] = remainder + '7';
		}
		n /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexadecimal[j]);
	free(hexadecimal);
	return (count);
}
/**
 * print_octals - print numbers in base 8
 * @args: number to print
 * Return: @count, number or chars printed.
 */
int print_octals(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int a, b, c, d, f;
	int count = 0;

	b = n;
	c = 1;
	for (a = 1 ; b > 7 ; a++)
	{
		b = b / 8;
		c = c * 8;
		count++;
	}
	for (f = 1; f <= a; f++)
	{
		d = n / c;
		n = n % c;
		c = c / 8;
		_putchar(d + '0');
		count++;
	}
	return (count);
}
