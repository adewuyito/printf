#include "main.h"

/**
 * get_op - Function to get operations
 * @s: Pointer to Function
 * Return: Function
 */
int (*get_op(char *s))(va_list)
{
	int i;
	_op ops[] = {
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa},
		{"X", print_hexa_large},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"c", print_char},
		{"u", print_uns_int},
		{"p", print_char},
		{"d", print_char},
		{"%", print_percent},
		{"R", print_rot13},
		{NULL, print_non},
	};

	i = 0;
	if (ops[i].name == NULL && *(ops[i].name) != *s)
	{
		*(ops[-1].name) = *s;
		return (print_non);
	}
	while (ops[i].name != NULL && *(ops[i].name) != *s)
	{
		i++;
	}
	return (ops[i].func);
}
