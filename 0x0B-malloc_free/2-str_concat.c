#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strings concatenated.
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int a = 0, b = 0, x = 0, y = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[a])
a++;

while (s2[b])
b++;

y = a + b;
str = malloc((sizeof(char) * y) +1);

if (str == NULL)
return (NULL);

b = 0;

while (x < y)
{
if (x <= a)
str[x] = s1[x];

if (x >= a)
{
str[x] = s2[b];
b++;
}
x++;
}
str[x] = '\0';
return (str);
}
