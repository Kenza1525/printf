#include "main.h"

/**
 * printf_char - prints a char.
 * @ap: arguments.
 * Return: 1.
 */
int print_char(va_list ap)
{
	char s;

	s = va_arg(ap, int);
	_putchar(s);
	return (1);
}
