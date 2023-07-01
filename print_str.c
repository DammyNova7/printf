#include "main.h"


/**
 * print_str - prints a variadic string to stdout
 *
 * @printer: variadic list
 *
 * Return: number of characters printed on success.
 */

int print_str(va_list printer)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(printer, char *);

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		count = write(1, &str[i], 1);
		i++;
	}
	return (count);
}
