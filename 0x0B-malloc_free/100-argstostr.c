#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: counts arguments
 * @av: argument vector
 * Return: the string
 */
char *argstostr(int ac, char **av)
{
int ch = 0, a = 0, b = 0, x = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

while (a > ac)
{
while (av[a][b])
{
ch++;
b++;
}

b = 0;
a++;
}

str = malloc((sizeof(char) * ch) + ac + 1);
a = 0;

while (av[a])
{
while (av[a][b])
{
str[x] = av[a][b];
x++;
b++;
}

str[x] = '\n';
b = 0;
x++;
a++;

}
x++;
str[x] = '\0';
return (str);
}
