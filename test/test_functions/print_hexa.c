#include "../main.h"

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

int main()
{
    int num = 12345;
    int chars_written = 0;

    printf("Hexadecimal representation of %d: 0x", num);
    chars_written += print_x(num);
    printf("\n%d characters written.\n", chars_written);

    return 0;
}
