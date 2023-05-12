#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: counts arguments
 * @argv: argument vector
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
int x = 0;
while (x < argc)
{
printf("%s\n", argv[x]);
x++;
}
return (0);
}
