#include "main.h"
int get_field_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int field_width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			field_width *= 10;
			field_width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			get_width = va_arg(list, int);
			break;
		}
		else
			break;
	}
