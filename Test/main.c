#include <limits.h>
#include "main.h"



/**

 * main - Entry point

 *

 * Return: Always 0

 */

int main(void)

{
 unsigned int ui;
 ui = (unsigned int)INT_MAX + 1024;
_printf("There is %b bytes in %b KB\n", 1024, 1);
    _printf("%b\n", 98);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Unsigned:[%u]\n", ui);

    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);

    printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    return (0);

}
