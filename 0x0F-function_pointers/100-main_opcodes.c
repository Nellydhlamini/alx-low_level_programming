#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of itself
 * @argc: argument counter
 * @argv: array of pointers to the argument
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
int bytes, b;
char *array;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
array = (char *)main;

for (b = 0; b < bytes; b++)
{
if (b == bytes)
{
printf("%02hhx\n", array[b]);
break;
}
printf("%02hhx", array[b]);
}
return (0);
}
