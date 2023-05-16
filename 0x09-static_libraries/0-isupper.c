#include "main.h"
/**
 *  _islower - checks to see if a character is is uppercase
 *  @c: character to be checked
 *  Return: 1 if uppercase, 0 if not
 */
int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
