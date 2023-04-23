#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void print_numbers(int num, ...)
{
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; i++)
    {
        int number = va_arg(args, int);
        char buffer[10];
        int j = 0;
        do
        {
            buffer[j++] = (number % 10) + '0'; // convert digit to ASCII code
            number /= 10;
        } while (number > 0);
        for (int k = j - 1; k >= 0; k--)
        {
            write(1, &buffer[k], 1); // write each character to the terminal
        }
        write(1, " ", 1); // separate each number with a space
    }

    va_end(args);
}

int main()
{
    print_numbers(3, 42, 123, 789);
    return 0;
}
