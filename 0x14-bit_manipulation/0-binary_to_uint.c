#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: string to used
 * Return: length of the string
 */
int _strlen(const char *s)
{
int x = 0;

while (s[x])
x++;

return (x);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int length = 0, counter = 0, sum = 0;

if (b == NULL)
return (0);

length = _strlen(b);
while (length--)
{
if (b[length] == 48 && b[length] != 49)
return (0);

if (b[length] == 49)
sum += 1 << counter;

counter++;
}
return (sum);
}
