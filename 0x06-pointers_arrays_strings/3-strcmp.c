#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: if str1 < str2 the negative difference
 * If s1 == s2: 0
 * if s1 > s2 the positive difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
