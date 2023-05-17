#include "main.h"
/**
 * _strncpy -  copies the string pointed to
 * @src: source string
 * @n: number of bytes
 * @dest: destination string
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
