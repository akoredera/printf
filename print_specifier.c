#include "main.h"
/**
 * print_perc - print char
 * @my_args: argument.
 * Return: count of chars.
 */
int print_perc(va_list my_args)
{
	(void)my_args;

	_putchar('%');
	return (1);
}
/**
 * print_char - print char
 * @my_args: argument.
 * Return: count of chars.
 */
int print_char(va_list my_args)
{
	char c;

	c = va_arg(my_args, int);

	_putchar(c);
	return (1);
}
/**
 * print_str - print string.
 * @my_args: argument.
 * Return: character count.
 */
int print_str(va_list my_args)
{
	int i, count = 0;
	char *str;

	if (sizeof(va_arg(my_args, char *)) != sizeof(char *))
		return (-1);
	str = va_arg(my_args, char *);

	if (!str)
	{
		str = "(null)";
	}
	if (str[0] == '\0')
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		count += _putchar(str[i]);
	return (count);
}
/**
 * print_num - print a nume converted to string
 * @my_args: list of arguement
 * Return: no of characters printed by print_int
 */
int print_num(va_list my_args)
{
	int result;
	int value = va_arg(my_args, int);

	result = print_int(value);
	return (result);
}
