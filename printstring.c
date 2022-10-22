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
