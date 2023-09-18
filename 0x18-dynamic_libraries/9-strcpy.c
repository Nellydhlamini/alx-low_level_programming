#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination of the value
 * @src: origin of the value
 * Return: the pointer of the destination
 */
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; src[x] != '\0'; x++)
{
dest[x] = src[x];
}
dest[x++] = '\0';
return (dest);
}
