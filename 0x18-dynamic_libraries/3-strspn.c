#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: inputted string
 * @accept: inputted string
 * Return: 0 (successful)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b = 0, number = 0, checker;
while (s[a] != '\0')
{
a++;
checker = 0;
while (accept[b] != '\0')
{
b++;
if (accept[b] == s[a])
{
number++;
checker = 1;
}
}
if (checker == 0)
return (number);
}
return (number);
}
