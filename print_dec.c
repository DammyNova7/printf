#include "main.h"

/**
 * print_dec - prints base 10 integers
 *
 * @args: variadic list
 *
 * Return: number of characters printed on Success
 */

int print_dec(va_list printer)
{
	int i = 0;
	int count = 0;
	int numb;
	int arr[10];
	char x[1];

	numb = va_arg(printer, int);

	while (numb != 0)
	{
		arr[i] = (numb % 10);
		numb = numb / 10;
		if (numb == 0)
			break;
		else
			i++;
	}

	for (i; i >= 0; i--)
	{
		x[0] = ('0' + arr[i]);
		count += write(1, x, 1);
	}

	return (count);
}
