#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for testing the `_printf` function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    _printf("Character: [%c]\n", 'H');
    _printf("String: [%s]\n", "Hello, world!");
    _printf("Percent: [%%]\n");
    _printf("Integer: [%d]\n", 12345);
    _printf("Negative integer: [%d]\n", -6789);

    return (0);
}

