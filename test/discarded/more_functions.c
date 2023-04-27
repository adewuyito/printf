#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void rot13(char *str, ...);

int main()
{
    rot13("Hello, world!");
    rot13("This is a test.");
    rot13("Another string to encrypt.");

    return 0;
}

void rot13(char *str, ...)
{
    va_list args;
    va_start(args, str);

    while(str != NULL)
    {
        int i = 0;

        while(str[i] != '\0')
        {
            char c = str[i];

            if(c >= 'a' && c <= 'z')
            {
                if(c > 'm')
                {
                    c -= 13;
                }
                else
                {
                    c += 13;
                }
            }
            else if(c >= 'A' && c <= 'Z')
            {
                if(c > 'M')
                {
                    c -= 13;
                }
                else
                {
                    c += 13;
                }
            }

            putchar(c);
            i++;
        }

        putchar('\n');

        str = va_arg(args, char *);
    }

    va_end(args);
}
