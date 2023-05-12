#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: argument vector
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
int value1 = 0;
int value2 = 0;

if (argc == 3)
{
value1 = atoi(argv[1]);
value2 = atoi(argv[2]);
printf("%d\n", value1 *value2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
