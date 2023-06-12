#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file(int find);
char *create_buffer(char *file);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of file the buffer is storing chars for.
 * Return: A pointer to new buffer.
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * main - Copies one file to another file.
 * @argc: Cunts arguments.
 * @argv: Argument vector.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
char *buffer;
int source, destination, scan, wrte;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
source = open(argv[1], O_RDONLY);
scan = read(source, buffer, 1024);
destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source == -1 || scan == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

wrte = write(destination, buffer, scan);
if (destination == -1 || wrte == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

scan = read(source, buffer, 1024);
destination = open(argv[2], O_WRONLY | O_APPEND);

} while (scan > 0);

free(buffer);
close_file(source);
close_file(destination);

return (0);
}

/**
 * close_file - Closes file descriptors.
 * @find: The file descriptor to be closed.
 */
void close_file(int find)
{
int x;

x = close(find);

if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", find);
exit(100);
}
}
