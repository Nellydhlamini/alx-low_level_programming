#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int length, index = 0;
char temp;

while (s[index++] != '\0')
{
length++;
}
for (index = length - 1; index >= length / 2; index--)
{
temp = s[index];
s[index] = s[length - index - 1];
s[length - index - 1] = temp;
}
}
