#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the arrat of integers.
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp, x;

for (x = n - 1; x >= n / 2; x--)
{
temp = a[n - 1 - x];
a[n - 1 - x] = a[x];
a[x] = temp;
}

}
