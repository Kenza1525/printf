#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @c: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *c;
	int (*f)();
} kp;

int print_pointer(va_list ap);
int print_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned int num);
int print_exclusive_string(va_list ap);
int print_HEX(va_list ap);
int print_hex(va_list ap);
int print_oct(va_list ap);
int print_unsigned(va_list args);
int print_bin(va_list ap);
int print_srev(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_char(va_list ap);
int print_string(va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
