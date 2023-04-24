#include "main.h"

int _printf(char *format, ...)
{
	int times, i;

	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				/* Case for intiger and decimal */
			case 'i':
			case 'd':
			{
				int arg = va_arg(args, int);
				times += print_int(arg);
				break;
			}
			/* Case on string */
			case 's':
			{
				char *arg = va_arg(args, char *);
				times += print_string(arg);
				break;
			}
			/* Case on Characters */
			case 'c':
			{
				char arg = va_arg(args, int);
				times  += print_char(arg);
				break;
			}
			/* Case on Character % */
			case '%':
			{
				times += print_char('%');
				break;
			}
			}
		}
		else
		{
			times += print_char(format[i]);
		}
	}
	va_end(args);

	return (times);
}

/* Completed functions */
int print_char(char g)
{
	return (write(1, &g, 1));
}

/* Completed function */
int print_int(int arg)
{
	char buffer[12];
	int i = 0;
	int count = 0;
	int j;
	int k;
	char temp;

	if (arg == 0)
	{
		count = 1;
		write(1, "0", 1);
		return (count);
	}
	if (arg < 0)
	{
		count += write(1, "-", 1);
		arg = -arg;
	}
	while (arg > 0)
	{
		buffer[i++] = (arg % 10) + '0'; /* convert digit to ASCII code */
		arg /= 10;
	}
	for (j = 0, k = i - 1; j < k; j++, k--)
	{
        temp = buffer[j];
        buffer[j] = buffer[k];
        buffer[k] = temp;
	}
	count += write(1, buffer, i);

	return (count);
}

/* Completed function */
int print_string(char *string)
{
	int len;

	len = strlen(string);
	if (string == NULL)
	{
		string = "(null)";
		len = strlen(string);
	}

	return (write(1, string, len));
}
