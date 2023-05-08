#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @c: the character in the string being searched for.
 * @s: the string
 * Return: 0 (successful)
 */
char *_strchr(char *s, char c)
{
int b = 0;

while (s[b] >= '\0')
{
b++;
if (s[b] == c)
return (s + b);
}
return (NULL);
}
