#include "main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, x, a;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (x = size - i; x >= 1; x--)
{
_putchar(' ');
}
for (a = 1; a <= i; a++)
{
_putchar('#');
}
_putchar('\n');
}
}



}
