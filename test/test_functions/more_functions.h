#ifndef MORE_FUNCTIONS_H
#define MORE_FUNCTIONS_H

#include <stddef.h>
typedef struct _operation
{
    char *name;
    int (*func)(int format, ...);
} _op;
int print_binary(int format, ...);
int print_hexa(int format, ...);
int print_binary(int format, ...);
int print_binary(int format, ...);
int (*get_op(char *s))(int format, ...);


#endif /* More_Functions */