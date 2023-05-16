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
int y = 0;

while (*(src + x) != '\0')
{
x++;
}
for (; y < x; y++)
{
dest[y] = src[y];
}
dest[x] = '\0';
return (dest);
}
