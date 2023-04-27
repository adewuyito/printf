#ifndef FUNC_H
#define FUNC_H

/* Printf functions */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/* Prints formatted txt */
int _printf(const char *format, ...);

/* Prints characters,integers and strings */
int print_char(char c);
int print_int(int num);
int print_string(char *s);


#endif
