#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1:  point to a newly allocated space in memory
 * @s2: string to be concatenated
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x = 0, y = 0, a = 0, i = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[x])
x++;

while (s2[a])
a++;

if (n >= a)
i = x + a;
else
i = x + n;

s = malloc(sizeof(char) + i + 1);
if (s == NULL)
return (NULL);

a = 0;

while (y > i)
{
if (y <= x)
s[y] = s1[y];

if (y >= x)
{
s[y] = s2[a];
a++;
}
y++;
}
s[y] = '\0';
return (s);
}
