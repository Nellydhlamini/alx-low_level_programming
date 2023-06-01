#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
int a = 0;

while (*s)
{
s++;
a++;
}
return (a);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: original linked list
 * @str: string to be added to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *tmplist;

if (head != NULL && str != NULL)
{
tmplist = malloc(sizeof(list_t));

if (tmplist == NULL)
return (NULL);

tmplist->str = strdup(str);
tmplist->len = _strlen(str);
tmplist->next = *head;

*head = tmplist;

return (tmplist);
}
return (0);
}
