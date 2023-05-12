#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: counts arguments
 * @argv: argument vector
 * return: 0 (successful)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
