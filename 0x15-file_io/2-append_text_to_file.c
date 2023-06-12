#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
int a = 0;

while (s[a])
a++;

return (a);
}
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if succesfull, -1 if falied
 */
int append_text_to_file(const char *filename, char *text_content)
{
int find, wrte;

if (!filename)
return (-1);

find = open(filename, O_WRONLY | O_APPEND);
wrte = write(find, text_content, _strlen(text_content));

if (find == -1 || wrte == -1)
return (-1);

close(find);

return (1);
}
