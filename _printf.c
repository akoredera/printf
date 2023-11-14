#include "main.h"
/**
 * _printf - Emulate the original.
 * * @format: Format by specifier.
 * * Return: count of chars.
 */
int _printf(const char *format, ...)
{
	int count = 0, count_func = 0, a = 0;
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
			if (!format[a + 1] || (format[a + 1] == ' ' && !format[a + 2]))
			{
				count = -1;
				break;
			}
			count_func += get_func(format[a + 1], my_args);
			if (count_func == 0)
				count += _putchar(format[a + 1]);
			if (count_func == -1)
				count = -1;
			a++;
		}
		else
		{
			if (count == -1)
				_putchar(format[a]);
			else
				count += _putchar(format[a]);
		}
		a++;
		if (count != -1)
			count += count_func;
	}
	va_end(my_args);
	return (count);
}
