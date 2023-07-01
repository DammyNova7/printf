#include "main.h"


/**
 * print_pcent - prints the % character to stdout
 *
 * @printer: variadic list
 *
 * Return: number of printed characters on success.
 */

int print_pcent(va_list printer)
{
	(void)printer;

	write(1, "%", 1);

	return (1);
}
