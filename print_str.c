#include "main.h"
/**
 * print_str - print string.
 *
 * @my_args: argument.
 *
 * Return: character count.
 */
int print_str(va_list my_args)
{
	int i, count = 0;
	char *str = va_arg(my_args, char *);

	if (!str)
	{
		str = "(null)";
	}
	if (str[0] == '\0')
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		count = _putchar(str[i]);
	return (count);
}
