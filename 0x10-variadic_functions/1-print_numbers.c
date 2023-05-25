#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n:  the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int x = 0;

va_start(args, n);

if (n > 0)
{
while (x < n)
{
printf("%d", va_arg(args, int));

if (x != n - 1 && separator != NULL)
printf("%s", separator);
x++;
}
va_end(args);
}
printf("\n");
}
