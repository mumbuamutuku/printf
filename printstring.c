#include "main.h"
/**
* print_bigS - Non printable characters
* @args: arguments
* Return: character printed
*/
int print_bigS(va_list args)
{
	int i, j = 0;
	char *str = va_arg(args, char *);
	char *res;

	if (!str)
		return (_puts(("null")));
	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			j += 2;
			res = convert(str[i], 16, 0);
			if (!res[1])
				j += _putchar('0');
			j += _puts(res);
		}
		else
			j += _putchar(str[i]);
	}
	return (j);
}
/**
 * print_reversed - Calls a function to reverse and print a string
 * @args: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list args)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - Converts string to rot13
 * @args: string to convert
 * Return: converted string
 */
int rot13(va_list args)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}
