#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalised
 * Return: capitalised string
 */
char *cap_string(char *s)
{
int a = 0;
while (s[a])
{
while (!(s[a] >= 97 && s[a] <= 122))

a++;

if (s[a - 1] == ' ' ||
s[a - 1] == ',' ||
s[a - 1] == ';' ||
s[a - 1] == '.' ||
s[a - 1] == '?' ||
s[a - 1] == '!' ||
s[a - 1] == '"' ||
s[a - 1] == '(' ||
s[a - 1] == ')' ||
s[a - 1] == '{' ||
s[a - 1] == '}' ||
s[a - 1] == '\t' ||
s[a - 1] == '\n' ||
a == 0)
s[a] -= 32;
a++;
}
return (s);
}
