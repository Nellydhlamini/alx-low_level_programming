#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: is the input number.
 * Return: 0 (success)
 */
int print_last_digit(int i)
{
int ld;

ld = i % 10;
if (ld < 0)
{
ld = ld * -1;
}
_putchar(ld + '0');
return (ld);
}
