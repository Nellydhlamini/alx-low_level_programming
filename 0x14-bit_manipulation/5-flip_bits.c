#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits -  returns bits needed to flip to get from one number to another
 * @n: number to be changed
 * @m: variable
 * index: the index
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = 0, sum = 0;

x = n ^ m;
while (x)
{
if (x & 1)
sum++;

x >>= 1;
}
return (sum);
}
