#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
int a = 0;

while (s[a])
a++;

return (a);
}

/**
 * create_file -  creates a file
 * @filename: name of the file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 if successful, 0 if not
 */
int create_file(const char *filename, char *text_content)
{
int find;

if (!filename)
return (-1);

find = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (find == -1)
return (-1);

if (text_content)
write(find, text_content, _strlen(text_content));

close(find);
return (1);
}
