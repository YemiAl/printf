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
	int i, j, count = 0;
	char ch;
	char *str;
	va_list argument;

	va_start(argument, format);
	for (i = 0; format[i] != '\0'; i++)
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
				i++, count++;
			}
			if (format[i + 1] == 's')
			{
				str = va_arg(argument, char *);
				j = 0, i++;
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					j++, count++;
				}
			}
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i++, count++;
			}
		}
	}
	va_end(argument);
	return (count);
}
