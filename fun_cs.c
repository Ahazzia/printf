#include "main.h"

/**
 * cases_cs - cases c, s & % for _printf
 * @format: character string
 * @i: index
 * @args: arguments
 * Return: number of characters printed
 */
int cases_cs(const char *format, int i, va_list args)
{
int j = 0, count = 0;
char *str;

switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
count++;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
for (j = 0; str[j] != '\0'; j++)
{
_putchar(str[j]);
count++;
}
break;
case '%':
_putchar('%');
count++;
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
break;
}

return (count);
}
