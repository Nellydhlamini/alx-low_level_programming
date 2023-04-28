#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int i, x;

while (i <= 10)
{
while (x <= 14)
{
if (x > 9)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
x++;
}
_putchar('\n');
i++;
}
}
