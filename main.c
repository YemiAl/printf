#include "main.h"

int main(void)
{
    int num, my_num;
    char name[10] = "Oluyemi";
    char c = 'A';
    int j = 15000;
    unsigned int ux = 655388888;


    printf("Using standard Printf\n");
    printf("1.\n");
    num = _printf("My name is Yemi");
    printf("\n%d\n", num);
    printf("\n");

    printf("2.\n");
    num = printf("Our char is %c", c);
    printf("\n%d\n", num);
    printf("\n");

    printf("3.\n");
    num = printf("Our string is %s", name);
    printf("\n%d\n", num);
    printf("\n");

    printf("4.\n");
    num = printf("My score was 97%%. I passed");
    printf("\n%d\n", num);
    printf("\n");

    printf("5.\n");
    num = printf("My score was %d", j);
    printf("\n%d\n", num);
    printf("\n");

    printf("6.\n");
    num = printf("My score was %u", ux);
    printf("\n%d\n", num);
    printf("\n");

    printf("7.\n");
    num = printf("My score was %o", 400);
    printf("\n%d\n", num);
    printf("\n");

    printf("8.\n");
    num = printf("My score was %X", 11);
    printf("\n%d\n", num);
    printf("\n");

    printf("9.\n");
    num = printf("My score was %x", 11);
    printf("\n%d\n", num);
    printf("\n");


    _printf("------------------\n");

    _printf("Using My Printf\n");
    _printf("1.\n");
    my_num = _printf("My name is Yemi");
    _printf("\n%d\n", my_num);    /* Change later */
    _printf("\n");

    _printf("2.\n");
    my_num = _printf("Our char is %c", c);
    _printf("\n%d\n", my_num);     /* Change later */
    _putchar('\n');

    _printf("3.\n");
    my_num = _printf("Our string is %s", name);
    _printf("\n%d\n", my_num);     /* Change later */
    _printf("\n");

    _printf("4.\n");
    my_num = _printf("My score was 97%%. I passed");
    _printf("\n%d\n", my_num);    /* Change later*/
    _printf("\n");

    _printf("5.\n");
    my_num = _printf("My score was %d", j);
    _printf("\n%d\n", my_num);    /* Change later */
    _printf("\n");

    _printf("5A.\n");
    my_num = _printf("My score was %b", 98);
    _printf("\n%d\n", my_num);    /* Change later */
    _printf("\n");

    _printf("6.\n");
    my_num = _printf("My score was %u", ux);
    _printf("\n%d\n", my_num);
    _printf("\n");

    _printf("7.\n");
    my_num = _printf("My score was %o", 400);
    _printf("\n%d\n", my_num);
    _printf("\n");

    _printf("8.\n");
    my_num = _printf("My score was %X", 11);
    _printf("\n%d\n", my_num);
    _printf("\n");

    _printf("9.\n");
    my_num = _printf("My score was %x", 11);
    _printf("\n%d\n", my_num);
    _printf("\n");
    return (0);


}
