#include "../main.h"

int print_asci(char arg)
{
    arg + '0';
    return arg;
}

int main(void)
{
    char *c = "h";
    write(1, &c, 2);
    return 0;
}