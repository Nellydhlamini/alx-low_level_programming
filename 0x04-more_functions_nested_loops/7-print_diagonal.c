#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
int a = 0, b = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (a < n)
{
a++;
while (b < a)
{
_putchar(32);
b++;
}
_putchar(92);
_putchar('\n');
}	

}


}
