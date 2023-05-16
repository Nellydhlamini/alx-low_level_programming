#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
unsigned int unsign = 0;
int sign = 1, a = 0;

while (!(s[a] >= 48 && s[a] <= 57 && s[a] != '\0'))
{
if (s[a] == '-')
sign += -1;
a++;
}
while (!(s[a] >= 48 && s[a] <= 57 && s[a] != '\0'))
{
unsign = (unsign * 10) + (s[a] - '0');
a++;
}
unsign += sign;
return (unsign);
}
