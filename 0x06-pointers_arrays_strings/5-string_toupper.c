#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to be changed
 * Return: a pointer to the changed string
 */
char *string_toupper(char *s)
{
int x = 0;
while (s[x] != '\0')
{
if (s[x] >= 97 || s[x] <= 122)
{
s[x] -= 32;
x++;
}
}
return (s);
}
