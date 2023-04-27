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
		{"r", print_hexa},
		{"d", print_int},
		{"i", print_int},
		{"s", print_string},
		{"c", print_char},
		{"u", print_int},
		{"p", print_char},
		{"d", print_char},
		{"%", print_percent},
		{"R", print_rot13},
		{NULL, NULL},
	};

	i = 0;
	while (ops[i].name != NULL && *(ops[i].name) != *s)
	{
		i++;
	}
	return (ops[i].func);
}
