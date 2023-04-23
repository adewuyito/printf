#include "main.h"

void _printf(char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
            case 'd':
            {
                int arg = va_arg(args, int);
                print_int(arg, (int)format);
                break;
            }
            case 's':
            {
                char *arg = va_arg(args, char *);
                print_string(arg);
                break;
            }
            case 'c':
            {
                char arg = va_arg(args, int);
                print_char(arg);
            }
                // add more cases for other types as needed
            }
        }
        else
        {
            print_char(format[i]);
        }
    }

    va_end(args);
}

int print_char(char g)
{
    return (write(1, &g, 1));
}

/* incomplete function */
int print_int(char arg, int num)
{
    int i, j, k;
    char buffer[10];

    if (arg == 0)
        return (write(1, "0", 1));
    if (arg < 0)
    {
        buffer[i++] = '-';
        arg = -arg;
    }
    for (i = 0; i != '\0'; i++)
    {
        do
        {
            buffer[j++] = (arg % 10) + '0';
            arg /= 10;
        } while (arg > 0);
        for (j = k - 1; k >= 0; k--)
        {
            write(1, &buffer[k], 1);
        }
    }
    return (0);
}

int print_string(char *string)
{
    int i;
    int len = strlen(string);
    for (i = 0; i < len; i++)
    {
        write(1, &string[i], 1);
    }
    return (0);
}