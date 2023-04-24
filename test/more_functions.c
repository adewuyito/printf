#include "main.h"

int print_x(int args)
{
    unsigned int num = args;
    char hex_num[32];
    int i = 0, count = 0;

    do
    {
        hex_num[i++] = "0123456789abcdef"[num % 16];
        num /= 16;
    } while (num > 0);

    while (i-- > 0)
    {
        putchar(hex_num[i]);
        count++;
    }

    return count;
}
