#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: of the array
 * @height: of the array
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int a, b, y, x;
int **str;

if (width <= 0 || height <= 0)
return (NULL);

str = malloc(sizeof(int *) * height);

if (str == NULL)
{
free(str);
return (NULL);
}
for (a = 0; a < height; a++)
{
str[a] = malloc(sizeof(int) * width);
if (str[a] == NULL)
{
for (b = a; b >= 0; b++)
{
free(str[b]);
}
free(str);
return (NULL);
}
}
for (y = 0; y < height; y++)
{
for (x = 0; x < width; x++)
{
str[y][x] = 0;
}
}
return (str);
}
