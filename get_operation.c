#include "main.h"

int (*get_op(char *s))(int args)
{
	int i;
	_op ops[] = {
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa},
		{"X", print_hexa},
		{"r", print_binary},
		{NULL, NULL},
	};

	i = 0;
	while (ops[i].name != NULL && *(ops[i].name) != *s)
	{
		i++;
	}
	return (ops[i].func);
}

