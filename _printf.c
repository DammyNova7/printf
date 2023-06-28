#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints formatted text to stdout
 *
 * @format: the string to print
 * @...: variadic arguments
 *
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	char *str;

	va_list print;

	va_start(print, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					_putchar(va_arg(print, int));
					count++;
					break;
				case 's':
					str = va_arg(print, char *);
					while (*str)
					{
						_putchar(*str);
						count++;
						str++;
					}
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
			format++;
	}

		va_end(print);

		return (count);
}
