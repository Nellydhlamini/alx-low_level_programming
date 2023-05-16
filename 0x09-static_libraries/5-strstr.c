#include "main.h"
/**
 * _strstr - entr point
 * @haystack: inputted value or string
 * @needle: inputted string
 * Return: 0 (succesful)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *y = needle;

while (*x == *y && *y != '\0')
{
x++;
y++;
}
if (*x == '\0')
return (haystack);
}
return (0);
}
