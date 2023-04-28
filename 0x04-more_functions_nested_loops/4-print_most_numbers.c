#include "main.h"
/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (i == 50 || i == 52)
{
continue;
i++;
}
else
{
_putchar(i);
i++;
}
}
_putchar('\n');

}
