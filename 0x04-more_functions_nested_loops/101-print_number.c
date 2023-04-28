#include "main.h"
/**
 * print_number -  prints an integer
 * @b: the integer to be printed
 * Return: 0 (success)
 */
void print_number(int b)
{
unsigned int a = b;

if (b < 0)
{
_putchar(45);
a = -a;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar(a % 10 + '0');
}
