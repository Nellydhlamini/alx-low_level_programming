#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: character to fill the array
 * Return: Array of characters
 */
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *str;

if (size == 0)
return (NULL);

str = malloc(size * sizeof(char));

if (str == NULL)
return (NULL);

for (a = 0; a < size; a++)
{
str[a] = c;
}
return (str);
}
