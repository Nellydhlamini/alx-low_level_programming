#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all -  prints everything
 * @format: lists the types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
int x = 0;
char *str, *separator = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[x])
{
switch (format[x])
{
case 'c':
printf("%s%c", separator, va_arg(list, int));
break;
case 'i':
printf("%s%d", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
x++;
continue;
}
separator = ", ";
x++;
}
}
printf("\n");
va_end(list);
}
