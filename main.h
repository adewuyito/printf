#ifndef FUNC_H
#define FUNC_H

/* Header Declrearation */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
<<<<<<< HEAD
=======
#include <stddef.h>

/**
 * struct _operation - struct _operation
 * @name: _operation name
 * @func: _operation fucntion
 */
typedef struct _operation
{
	char *name;
	int (*func)(int argument);
} _op;
>>>>>>> fc5182dd9e3103fa725cefc73dd5014233078809

/* Main Function */
int _printf(char *fmt, ...);

/* Type function */
<<<<<<< HEAD
int print_char(char c);
int print_int(int num);
int print_string(char *s);

=======
int print_char(va_list);
int print_int(va_list);
int print_string(va_list);
int print_binary(va_list);
int print_hexa(int args);
int print_octal(int args);
int (*get_op(char *s))(int args);
>>>>>>> fc5182dd9e3103fa725cefc73dd5014233078809

#endif
