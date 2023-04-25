#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer.
 * Return: void.
 */
void jack_bauer(void)
{
int i, n, a, b;
for (i = 0; i <= 2; i++)
{
for (n = 0; n <= 9; n++)
{
if ((i <= 1 && n <= 9) || (i <= 2 && n <= 3))
{
for (a = 0; a <= 5; a++)
{
for (b = 0; b <= 9; b++)
{
_putchar(i + '0');
_putchar(n + '0');
_putchar(58);
_putchar(a + '0');
_putchar(b + '0');
_putchar('\n');
}
}
}
}
}

}
