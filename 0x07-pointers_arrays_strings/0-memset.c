#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area 
 * @b:  constant byte 
 * @n: bytes of the memory
 * Return: 0 (successful)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);

}
