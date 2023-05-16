#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string given as a parameter.
 * Return: copy of the string
 */
char *_strdup(char *str)
{
char *s;
int x = 0, a = 1;

if (str == NULL)
return (NULL);

while (str[a])
{
a++;
}
s = malloc((sizeof(char) * a) +1);

if (s == NULL)
return (NULL);

while (x < a)
{
s[x] = str[x];
x++;
}
s[x] = '\0';
return (s);
}
