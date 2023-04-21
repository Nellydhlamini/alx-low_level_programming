#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
