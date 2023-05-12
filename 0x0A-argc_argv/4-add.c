#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: argument vector
 * Return: 0 (successful)
 */
int main (int argc, char *argv[])
{
int a = 0;
unsigned int x = 0, total = 0;
char *b;

if (argc > 1)
{
while (a < argc)
{
b = argv[a];
while (x < strlen(b))
{
if (b[x] < 48 || b[x] > 57)
{
printf("Error\n");
return (1);
}
x++;
}
total += atoi(b);
b++;
a++;
}
printf("%d\n", total);
}
else
{
printf("0\n");
}
return (0);


}
