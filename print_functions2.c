#include "main.h"


int decimaltohex(int number)
{
        int i, count = 0;
        int digit, index = 0;
        char hexadecimal[32];

        if (number == 0)
        {
                _putchar('0');
                return (1);
        }
        while (number > 0)
        {
                digit = number % 16;

                if (digit < 10)
                        hexadecimal[index] = digit + '0';
                else
                        hexadecimal[index] = digit - 10 + 'a';
                index++;
                number/= 16;
                count++;
        }
        for (i = index - 1; i >= 0; i--)
        {
                _putchar(hexadecimal[i]);
        }
        return (count);
}
