#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct spec - Struct for format
 * @format_specifiers: Struct format
 * @f: The function associated
 */

struct spec
{
	char *format_specifiers;
	int (*f)(va_list);
};
int get_func(char format, va_list my_args);
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(int value);
int print_str(va_list my_args);
int print_char(va_list my_args);
int print_perc(va_list my_args);
int print_num(va_list my_args);
#endif
