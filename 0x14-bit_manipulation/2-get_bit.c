#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: value to find index
 * @index: the index, starting from 0
 * Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int a = 0;

while (n)
{
if (a == index)
{
if (n % 2)
return (1);
else
return (0);
}
n = n / 2;
a++;
}
if (index > a && index < 63)
return (0);

return (-1);
}
