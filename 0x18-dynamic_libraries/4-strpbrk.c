#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: inputted string
 * @accept: second inputted string
 * Return; 0 (successful)
 */
char *_strpbrk(char *s, char *accept)
{
int x = 0, b = 0;
while (s[x] != '\0')
{
x++;
while (accept[b] != '\0')
{
b++;
if (s[x] == accept[b])
return (s + x);
}
}
return (NULL);
}
