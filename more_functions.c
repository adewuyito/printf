#include "main.h"

/**
 * print_hexa - Converts decimal numbers to hexa form
 * @args: The decimal to Converts
 *
 * Return: The amount of output written
 */
int print_hexa(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex_num[32];
	int i = 0, count = 0;

	do
	{
		hex_num[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num > 0);

	while (i-- > 0)
	{
		write(1, &hex_num[i], 1);
		count++;
	}

	return (count);
}

/**
 * print_hexa - Converts decimal numbers to hexa form
 * @args: The decimal to Converts
 *
 * Return: The amount of output written
 */
int print_hexa_large(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex_num[32];
	int i = 0, count = 0;

	do
	{
		hex_num[i++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	} while (num > 0);

	while (i-- > 0)
	{
		write(1, &hex_num[i], 1);
		count++;
	}

	return (count);
}

/**
 * print_binary - Converts decimal to binary
 * @args: The decimal to convert
 *
 * Return: The amount output written
 */
int print_binary(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int i = 0, count = 0, j;
	char binary[32] = {0};
	char buffer[32];

	if (arg == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (arg > 0)
	{
		binary[i] = arg % 2;
		arg = arg / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		buffer[count] = binary[j] + '0';
		count++;
	}
	write(1, buffer, count);

	return (count);
}

/**
 * print_octal - Converts decimal to Octal
 * @args: The Decimal to convert
 *
 * Return: The amount of string printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char oct_num[32];
	int i = 0, count = 0;

	do
	{
		oct_num[i++] = "012345678"[num % 8];
		num /= 8;
	} while (num > 0);

	while (i-- > 0)
	{
		write(1, &oct_num[i], 1);
		count++;
	}

	return (count);
}

/**
 * print_rot13 - Prints a string in rot-13 encription
 * @args: Pointer to a string
 *
 * Return: Number of bytes written
 */
int print_rot13(va_list args)
{
	int len;
	int i = 0;
	char *arg = va_arg(args, char *);

	len = strlen(arg);
	while (arg[i] != '\0')
	{
		char c = arg[i];

		if (c >= 'a' && c <= 'z')
		{
			if (c > 'm')
			{
				c -= 13;
			}
			else
			{
				c += 13;
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if (c > 'M')
			{
				c -= 13;
			}
			else
			{
				c += 13;
			}
		}

		write(1, &c, 1);
		i++;
	}

	va_end(args);
	return (len);
}
