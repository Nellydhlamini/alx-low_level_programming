#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb:  elements of the array
 * @size: size of array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int x = 0, i = 0;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

i = nmemb * size;
ptr = malloc(i);

if (ptr == NULL)
return (NULL);

while (x < i)
{
ptr[x] = 0;
x++;
}
return (ptr);
}
