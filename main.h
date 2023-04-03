#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS_CHARACTERS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* LENGTH_MODIFIERS */
#define S_LONG 2
#define S_SHORT 1

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int  field_width, int flags_characters, int precision, int length_modifiers);

/****************** FUNCTIONS ******************/

int print_char(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_string(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_percent(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int print_int(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_binary(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_unsigned(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_octal(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_hexadecimal(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int print_hexa_upper(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags_characters, char flag_ch, int field_width, int precision, int length_modifiers);

int print_non_printable(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int print_pointer(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int flags_characters(const char *format, int *i);
int field_width(const char *format, int *i, va_list list);
int precision(const char *format, int *i, va_list list);
int length_modifiers(const char *format, int *i);

int print_reverse(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int print_rot13string(va_list types, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int handle_write_char(char c, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int write_number(int is_positive, int ind, char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);
int write_num(int ind, char bff[], int flags_characters, int field_width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int field_width, int flags_characters, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags_characters, int field_width, int precision, int length_modifiers);

int printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif 
