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
			case 'i':
			case 'd':
			{
				times += print_int(args);
				break;
			}
			case 's':
			{
				times += print_string(args);
				break;
			}
			case 'c':
			{
				char arg = va_arg(args, int);

				times += print_char(arg);
				break;
			}
			case '%':
			{
				times += print_char('%');
				break;
			}
			case 'b':
			{
				times += print_char('%');
				break;
			}
			default:
				times += write(1, &format[i - 1], 2);
				break;
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
int print_char(char arg)
{
	return (write(1, &arg, 1));
}

/* Completed function */
int print_int(va_list args)
{
	int arg = va_arg(args, int);
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
int print_string(va_list args)
{
	int len;
	char *arg = va_arg(args, char *);
	len = strlen(arg);
	if (arg == NULL)
	{
		arg = "(null)";
		len = strlen(arg);
	}

	return (write(1, arg, len));
}
