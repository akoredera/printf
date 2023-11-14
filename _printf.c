#include "main.h"
/**
 * _printf - Emulate the original.
 * * @format: Format by specifier.
 * * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int count = 0, count_func = 0;
	va_list my_args;

	va_start(my_args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			if (!(format + 1) || (*(format + 1) == ' ' && !(*(format + 2))))
			{
				count = -1;
				break;
			}
			count_func += get_func(*(format + 1), my_args);
			if (count_func == 0)
				count += _putchar(*(format + 1));
			if (count_func == -1)
				count = -1;
		}
		else
		{
			if (count == -1)
				_putchar(*format);
			else
				count += _putchar(*format);
		}
		if (count != -1)
			count += count_func;
		format++;
	}
	va_end(my_args);
	return (count);
}
