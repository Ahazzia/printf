#include "main.h"
int get_length(const char *format, int *i)
{
	int curr_i = *i + 1;
	int length = 0;

	if (format[curr_i] == 'l')
		length = S_LONG;
	else if (format[curr_i] == 'h')
		length = S_SHORT;

	if (length == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (length);
}
