#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x;
int y = n;

for (x = 0; x < y; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}
