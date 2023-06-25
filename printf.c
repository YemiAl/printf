#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: printing format
 *
 * Return: number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	int i, j, num, num_count, str_count, count = 0;
	char ch;
	char *str;
	va_list argument;

	va_start(argument, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				ch = va_arg(argument, int);
				_putchar(ch);
				count++;
			}
			if (format[i + 1] == 's')
			{
				str = va_arg(argument, char *);
				str_count = print_string(str);
				count = count + str_count;
			}
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				count++;
			}
			if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
			{
				num = va_arg(argument, int);
				num_count = print_num(num);
				count = count + num_count;
			}
			i++;
		}
	}
	va_end(argument);
	return (count);
}
