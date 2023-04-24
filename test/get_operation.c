#include "main.h"


int (*get_op(char *s))(int format, ...)
{
    int i;
    _op ops[] = {
        {"b", print_binary},
        {"o", print_binary},
        {"x", print_binary},
        {"X", print_binary},
        {"b", print_binary},
        {NULL, NULL},
    };

    i = 0;
    while (ops[i].name != NULL && *(ops[i].name) != *s)
    {
        i++;
    }
    return (ops[i].func);

}