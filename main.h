#ifndef FUNC_H
#define FUNC_H

/* Header Declrearation */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/* Main Function */
int _printf(char *fmt, ...);

/* Type function */
int print_char(char c);
int print_int(int num);
int print_string(char *s);


#endif

