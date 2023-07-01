#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);
int print_char(va_list);
int print_str(va_list);
int print_pcent(va_list);
int print_int(va_list);
int print_dec(va_list);

/**
 * struct fun - struct for specifiers to print
 * @t: character
 * @f: function
 */

typedef struct fun
{
	char *t;
	int (*f)(va_list);
} fun_t;

#endif
