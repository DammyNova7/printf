#include "main.h"


/**
 * specifier - checks if character is a valid specifier and
 * and assigns function for printing
 * @char: the specifier/character to check
 *
 * Return: pointer to function.
 */

int (*specifier(const char *format))(va_list)
{
	int i;

	fun_t fun_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}};

	for (i = 0; fun_array[i].t != NULL; i++)
	{
		if (*(fun_array[i].t) == *format)
		{
			return (fun_array[i].f);
		}
	}

	return (NULL);
}
