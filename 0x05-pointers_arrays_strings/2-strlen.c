#include "main.h"
/**
 * _strlen - eturns the length of a string.
 * @s: string
 * Return: the length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s++)
{
length++;
}
return (length);


}
