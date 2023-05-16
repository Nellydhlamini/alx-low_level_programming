#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int x;

while (dest[i] != '\0')
{
i++;
}
x++;
while (x < n && src[x] != '\0')
{
dest[i] = src[x];
i++;
x++;
}
dest[i] = '\0';
return (dest);
}
