#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array to be used
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int b = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (b < size)
{
if (cmp(array[b]))
return (b);
b++;
}
}
}
return (-1);
}
