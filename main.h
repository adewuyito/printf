#ifndef FUNC_H
#define FUNC_H

/* Header Declrearation */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

/**
 * struct _operation - struct _operation
 * @name: _operation name
 * @func: _operation fucntion
 */
typedef struct _operation
{
	char *name;
	int (*func)(va_list);
} _op;

/* Main Function */
int _printf(char *fmt, ...);

/* Type function */
int print_char(va_list);
int print_int(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_hexa(va_list);
int print_hexa_large(va_list);
int print_octal(va_list);
int print_percent(va_list);
int (*get_op(char *s))(va_list);
int print_rot13(va_list);
int print_uns_int(va_list);
int print_non(va_list);

#endif
