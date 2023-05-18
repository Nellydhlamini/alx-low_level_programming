#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: minimum and maximum
 */
int *array_range(int min, int max)
{
int *ptr, x = 0;

if (min > max)
return (NULL);

ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (ptr == NULL)
return (NULL);

while (min <= max)
{
ptr[x] = min;
x++;
min++;
}
return (ptr);
}
