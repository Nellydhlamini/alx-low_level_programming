#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + 48);
n++;
}
putchar('\n');
return (0);
}
