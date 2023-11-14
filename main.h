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

typedef struct format_specifiers
{
	char format_specifiers;
	int (*a)(va_list);
} specifiers;

int _printf(const char *format, ...);
int get_func(char format, va_list my_args);
int _putchar(char c);
int print_str(va_list my_args);
int print_char(va_list my_args);
int print_perc(va_list my_args);
#endif
