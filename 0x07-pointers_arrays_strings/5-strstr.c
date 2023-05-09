#include "main.h"
/**
 * _strstr -  locates a substring
 * @needle: inputted string
 * @haystack: second inputted string
 * Return: 0 (successful)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *b = needle;

while (*x == *b && *b != '\0')
{
x++;
b++;
}
if (*b == '\0')
return (haystack);
}
return (NULL);
}
