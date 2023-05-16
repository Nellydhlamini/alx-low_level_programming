#include "main.h"
/**
 * _puts - prints a string to stdout
 * @s: string to printed
 * Return: void
 */
void _puts(char *s)
{
while (*s)
_putchar(*s++);

_putchar('\n');
}
