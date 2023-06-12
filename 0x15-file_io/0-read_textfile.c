#include "main.h"
/**
 * read_textfile -  reads a text file and prints to a standard output.
 * @filename: name of the file to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters managed to be returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff = malloc(sizeof(char *) * letters);
int find, scan, wrte;

if (!buff)
return (0);

if (!filename)
return (0);

find = open(filename, O_RDONLY);

if (find == -1)
return (0);

scan = read(find, buff, letters);
wrte = write(STDOUT_FILENO, buff, scan);

free(buff);
close(find);
return (wrte);
}
