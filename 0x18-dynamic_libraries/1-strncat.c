#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: the string to be appended by src
 * @src: the source string
 * @n: The number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int length = 0;

while (dest[a++])
{
length++;
}
for (a = 0; src[a] && a < n; a++)
{
dest[length++] = src[a];
}
return (dest);
}
