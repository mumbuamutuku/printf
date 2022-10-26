#include "main.h"
/**
* print_hex - prints a decimal in hexadecimal
* @args: input string
* Return: number of chars printed
*/
int print_hex(va_list args)
{
	unsigned int hex;
	int len = 0;
	char *h;

	hex = va_arg(args, unsigned int);
	h = convert(hex, 16, 1);
	if (hex == 1 && h[0] != '0')
		len += _puts("0x");
	len += _puts(h);
	return (len);
}
/**
 * print_bighex - prints a number in hexadecimal base, in uppercase
 * @args:va_list arguments
 * Return: va_list arguments
 */
int print_bighex(va_list args)
{
	unsigned int hex = va_arg(args, unsigned int);
	char *Hex = convert(hex, 16, 0);
	int count = 0;

	if (hex == 1 && Hex[0] != '0')
		count += _puts("0X");
	count += _puts(Hex);
	return (count);
}
/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
