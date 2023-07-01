#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints formatted text to standard output
 * @format: string to print to stdout
 *@...: variadic parameters
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int n = 0;
	va_list printer;
	int (*fun_ptr)(va_list);
	va_start(printer, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			n = write(1, &format[i], 1);
			count += n;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			fun_ptr = specifier(&format[i + 1]);
			if (fun_ptr != NULL)
			{
				n = fun_ptr(printer);
				count += n;
				i = i + 2;
				continue;
			}

			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				n = write(1, &format[i + 1], 1);
				count += n;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
