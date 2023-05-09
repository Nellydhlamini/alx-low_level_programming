#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of the array a
 */
void print_diagsums(int *a, int size)
{
int x, b;
int total1 = 0, total2 = 0;

for (x = 0; x <= (size * size); x = x + size + 1)
total1 += a[x];

for (b = size - 1; b <= (size * size) - size; b += size - 1)
total2 += a[b];
printf("%d, %d\n", total1, total2);
}
