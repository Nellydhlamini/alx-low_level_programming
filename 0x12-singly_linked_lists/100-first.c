#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a string
 * Return: void
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore m house upon my back!\n");
}
