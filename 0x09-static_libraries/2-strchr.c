#include "main.h"
/**
 * _strchr - entry point
 * @s: inputted value
 * @c: inputted value
 * Return: 0 (successful)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
