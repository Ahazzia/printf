int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
long int convert_size_number(long int num, int length)
{
	if (length == S_LONG)
		return (num);
	else if (length == S_SHORT)
		return ((short)num);

	return ((int)num);
}
long int convert_size_unsgnd(unsigned long int num, int length)
{
	if (length == S_LONG)
		return (num);
	else if (length == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
