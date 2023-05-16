#include "main.h"
/**
 * _isalpha - checks to see if a character is an alphabet
 * @c: the character
 * Return: 1 if its a letter and 0 if not
 */
int _isalpha(int c)
{
return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
