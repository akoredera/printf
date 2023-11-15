#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_int - converts integer to string
 * Return: an int
 * @value: the value to convert
 */

int print_int(int value)
{
	int i, printed;
	int buffer_size = snprintf(NULL, 0, "%d", value);
	char *buffer = (char *)malloc(buffer_size + 1);

	if (buffer == NULL)
	{
		return (-1);
	}

	printed = snprintf(buffer, buffer_size + 1, "%d", value);
	for (i = 0; i < printed; i++)
	{
		_putchar(buffer[i]);
	}

	free(buffer);
	return (printed);
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
