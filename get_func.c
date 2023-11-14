#include "main.h"
#include <unistd.h>
/**
 * get_func - function specifiers.
 *
 * @format: Conversion specifiers.
 * @my_args: arguments.
 *
 * Return: char count.
 */
int get_func(char format, va_list my_args)
{
	int i = 0, count_f = 0;
	specifiers for_str[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{0, NULL}
	};

	while (for_str[i].format_specifiers)
	{
		if (format == for_str[i].format_specifiers)
			count_f += for_str[i].a(my_args);
		i++;
	}
	if (count_f == 0)
	{
		count_f += _putchar('%');
		count_f += _putchar(format);
	}
	return (count_f);
}

