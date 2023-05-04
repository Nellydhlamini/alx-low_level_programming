#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: where the string will be copied
 * @src: the string to be copied
 * @n: max number of bytes to be copied
 * Return:  pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
int length = 0;

while (src[a++])
{
length++;
}
for (a = 0; src[a] && a < n; a++)
{
dest[a] = src[a];
}
for (a = length; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}
