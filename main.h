#ifndef FUNC_H
#define FUNC_H

/* Header Declrearation */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

/* Structure defination */
typedef struct _operation
{
    char *name;
    int (*func)(int format, ...);
} _op;

/* Main Function */
int _printf(char *fmt, ...);

/* Type function */
int print_char(char);
int print_int(va_list);
int print_string(va_list);
int print_binary(int format, ...);
int print_hexa(int args);
int print_binary(args);
int print_octal(args);
int (*get_op(char *s))(int format, ...);


#endif