#include "main.h"
/**
 * get_func - matching format with specifiers and return number of char
 * @format: char
 * @my_args: list of argument
 * Return: number of character
 */
int get_func(char format, va_list my_args)
{
	int count_func = 0;

	switch (format)
	{
		case 'c':
			count_func += print_char(my_args);
			break;
		case 's':
			count_func += print_str(my_args);
			break;
		case '%':
			count_func += print_perc(my_args);
			break;
		case 'd':
			count_func += print_num(my_args);
			break;
		case 'i':
			count_func += print_num(my_args);
			break;
		default:
			count_func += _putchar(format);
			break;
	}
	return (count_func);
}
