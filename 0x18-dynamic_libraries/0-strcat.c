#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: the string to be appended.
 * @src: the source string
 * Return: the pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int length = 0;
int  a;

while (dest[length])
{
length++;
}
for (a = 0; src[a] != 0; a++)
{
dest[length] = src[a];
length++;
}
dest[length] = '\0';
return (dest);
}
