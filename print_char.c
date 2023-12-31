#include "main.h"

/**
 * print_char - prints a character to standard output
 *
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list printer)
{
	char c = (char)va_arg(printer, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
			return (count);
	}
	return (0);
}
