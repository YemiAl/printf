#include "main.h"

int print_num(int number)
{
	int count = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0) /* For negative numbers */
	{
		_putchar('-');
		count++;
		number = -number;
	}

	if (number / 10)
	{
		count += print_num(number / 10);
	}
	_putchar('0' + (number % 10));
	count++;

	return (count);
}

int print_string(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++, count++;
	}
	return (count);
}


int decimalToBinary(int number)
{
	int digit;
	int count = 0;
	int binary = 0;
	int base = 1;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (number > 0)
	{
		digit = number % 2;
		binary += digit * base;
		base *= 10;
		number /= 2;
		count++;
	}
	_printf("%d", binary);
	return (count);
}
