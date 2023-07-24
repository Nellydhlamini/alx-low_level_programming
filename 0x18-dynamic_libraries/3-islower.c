#include "main.h"
/**
 *  _islower - checks parameter for lowercase.
 *  @c: Character to be checked.
 *  Return: 1 if lowercase and 0 for else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

