#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: the number of times the line will be printed
 * Return: empty
 */
void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar(95);
i++;
}
_putchar('\n');
}
}
