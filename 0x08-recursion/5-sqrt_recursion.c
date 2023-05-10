#include "main.h"
/**
 * _sqrt_recursion - will return the natural square root of a number.
 * _sqrt - Calculate the natural square root
 * @n: input value
 * @x: number
 * Return: 0 (successful)
 */
int _sqrt(int n, int x);

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));


}

/**
 * *_sqrt - Calculate the natural square root
 * @n: input to calculate square root
 *@x: number
 * Return: the natural sqaure root
 */
int _sqrt(int n, int x)
{
int sqrt = x * x;

if (sqrt > n)
return (-1);

if (sqrt == n)
return (x);

return (_sqrt(n, x + 1));
}
