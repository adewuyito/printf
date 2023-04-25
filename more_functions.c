#include "main.h"

int print_hexa(int args)
{
	unsigned int num = args;
	char hex_num[32];
	int i = 0, count = 0;

	do {
		hex_num[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num > 0);

	while (i-- > 0)
	{
		putchar(hex_num[i]);
		count++;
	}

	return (count);
}

int print_binary(int args)
{
	int i = 0, count = 0, j;
	char binary[32] = {0};
	char buffer[32];
	unsigned int arg = args;

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

int print_octal(int args)
{
	unsigned int num = args;
	char oct_num[32];
	int i = 0, count = 0;

	do {
		oct_num[i++] = "012345678"[num % 8];
		num /= 8;
	} while (num > 0);

	while (i-- > 0)
	{
		putchar(oct_num[i]);
		count++;
	}

	return (count);
}
