#include "main.h"
/**
 * _memcpy -  copies memory area.
 * @dest: destination memory area
 * @src: source memory area.
 * @n: bytes.
 * Return: 0 (successful)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
