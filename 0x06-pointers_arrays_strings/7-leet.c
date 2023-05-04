#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @x: input value
 * Return: the value x.
 */
char *leet(char *x)
{
int a = 0, b;
char string1[] = "aAeEoOtTlL";
char string2[] = "4433007711";

while (x[a] != '\0')
{
for (b = 0; b < 10; b++)
{
if (x[a] == string1[b])
{
x[a] = string2[b];
}
}
a++;
}
return (x);
}
