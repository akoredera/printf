#include "main.h"

/**
 * print_perc - print char
 *
 * @my_args: argument.
 *
 * Return: count of chars.
 */
int print_char(va_list my_args)
{
	char c = va_arg(my_args, int);

	_putchar(c);
	return (1);
}
