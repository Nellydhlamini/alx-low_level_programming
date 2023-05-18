#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @old_size: is the size, in bytes, of the allocated space.
 * @new_size:  new size, in bytes of the new memory block.
 * @ptr: a pointer to the memory previously allocated
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int a;
char *p;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
p = malloc(new_size);

if (p == NULL)
return (NULL);

return (p);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
p = malloc(new_size);

if (p == NULL)
return (NULL);

for (a = 0; a < old_size && a < new_size; a++)
{
p[a] = ((char *)ptr)[a];
}
free(ptr);
return (p);
}
