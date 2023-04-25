#include "main.h"
/**
 * print_alphabet - print the alphabet, in lowercase.
 * Return: 0 (success)
 */

void print_alphabet(void)
{
int n = 97;

while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
}
