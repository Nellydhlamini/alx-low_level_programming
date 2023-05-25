#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: bytes.
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;
int sum = 0;

if (n != 0)
{
va_start(args, n);

while (a < n)
{
sum += va_arg(args, int);
a++;
}
va_end(args);
return (sum);
}
return (0);
}
