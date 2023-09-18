#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: number that is being computed.
 * Return: Value of number or 0
 */
int _abs(int i)
{
if (i < 0)
{
int av;
av = i * -1;
return (av);
}
return (i);
}
