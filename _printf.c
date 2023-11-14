#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 */
int _printf(const char *format, ...)
{
	va_list my_args;

	int count = 0;
	char c;
	char *str;
	int str_len;

	if (format == NULL)
	{
		return(-1);
	}
	va_start(my_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == 'c')
			{
				c = va_arg(my_args, int);
				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(my_args, char *);
				str_len = 0;
				while (str[str_len] != '\0')
				{
					str_len++;
				}
				write(1, str, str_len);
				count += str_len;
			}
		}
		format++;
	}
	va_end(my_args);
	return(count);
}
