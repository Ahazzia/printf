#include "main.h"

/**
* _printf - produces output according to a format
* @format: character string
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list args;


if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
count += cases_cs(format, i, args);
else if (format[i] == 'd')
count += cases_di(format, i, args);
else if (format[i] == '\0')
return (-1);
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
