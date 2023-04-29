#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int main(int args, char *argv[])
{
	if (argv < 32)
	{
	printf("0123456789abcdef,\n");
	return 1;
	}

	decimal = atoi(argv[1]);

	printf("Decimal: %d\n", decimal);
	printf("Hexadecimal: 0x%X\n", decimal);

    return 0;
}
