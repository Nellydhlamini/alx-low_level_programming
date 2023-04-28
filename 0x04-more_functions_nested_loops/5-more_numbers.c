#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int i = 1, x = 0;

while (i <= 10)
{
while (x <= 14)
{
if (x >= 10)
{
_putchar('1');
_putchar(x % 10 + '0');
}
}
_putchar('\n');
i++;
}
}
