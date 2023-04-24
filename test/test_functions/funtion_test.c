#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

int print_binary(int fromat, ...)
{
    va_list args;
    va_start(args, fromat);

    int i = 0, count = 0, j;
    char binary[32] = {0};
    char buffer[32];
    int unsigned arg = va_arg(args, unsigned int);

    if (arg == 0)
    {
        write(1, "0", 1);
        return 1;
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

    va_end(args);
    return count;
}

int main(void)
{
    unsigned int num = 5;
    print_binar(1, num);
}