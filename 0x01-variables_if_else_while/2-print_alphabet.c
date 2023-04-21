#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}

