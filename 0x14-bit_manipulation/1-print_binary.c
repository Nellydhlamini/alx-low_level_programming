#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _divide: divides bits
 * @n: number  representing in bits
 * Return: void
 */
void _divide(unsigned long int n)
{
if (n < 1)
return;

_divide (n >> 1);

if (n & 1)
_putchar('1');
else
_putchar('0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number representing in bits
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
_divide(n);
}
