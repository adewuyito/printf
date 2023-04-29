#include "main.h"


/**
 * print_int - Print single integer characters
 * @args: va_list of the integer to be printed
 *
 * Return: The amount of integer printed out
 */
int print_uns_int(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	char buffer[12];
	int count = 0, i = 0;
	int j, k;
	char temp;

	if (arg == 0)
	{
		count = 1;
		write(1, "0", 1);
		return (count);
	}
	while (arg > 0)
	{
		buffer[i++] = (arg % 10) + '0';
		arg /= 10;
	}
	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		temp = buffer[j];
		buffer[j] = buffer[k];
		buffer[k] = temp;
	}
	count += write(1, buffer, i);

	return (count);
}

/**
 * print_int - Print single integer characters
 * @args: va_list of the integer to be printed
 *
 * Return: The amount of integer printed out
 */
int print_non(va_list args)
{
    write(1, &args, 1);

    return (2);
}