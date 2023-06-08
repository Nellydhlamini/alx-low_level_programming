#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0;
int x = 0;

if (!b)
return (0);

while (b[x])
{
if (b[x] < '0' || b[x] > '1')
return (0);
value = 2 * value + (b[x] - '0');
x++;
}
return (value);
}
