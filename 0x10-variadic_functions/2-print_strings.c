#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
va_list args;
unsigned int b = 0;

if (n > 0)
{
va_start(args, n);

while (b < n)
{
str = va_arg(args, char *);

if (str == NULL)
printf("%s", "(nil)");
else
printf("%s", str);

if (b != n - 1 && separator != NULL)
printf("%s", separator);
b++;
}
va_end(args);
}
printf("\n");
}
