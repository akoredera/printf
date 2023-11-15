#include "main.h"
/**
 * _printf - Emulate the original.
 * * @format: Format by specifier.
 * * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int count_func = 0, a = 0;
	va_list my_args;

	va_start(my_args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[a])
	{
		if (format[a] == '%')
		{
			format++;
			if (format[a] == '\0')
				break;
			count_func += get_func(format[a], my_args);
		}
		else
		{
			count_func += _putchar(format[a]);
		}
		a++;
	}
	va_end(my_args);
	return (count_func);
}
