#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - calculates the length of a string
 * @s: string to be counted
 * Return: length of string
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
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: original linked string
 * @str: string to be added to the node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newlist, *tmplist;

if (str != NULL)
{
newlist = malloc(sizeof(list_t));

if (newlist == NULL)
return (NULL);

newlist->str = strdup(str);
newlist->len = _strlen(str);
newlist->next = NULL;

if (*head == NULL)
{
*head = newlist;
return (*head);
}
else
{
tmplist = *head;
while (tmplist->next)
tmplist = tmplist->next;

tmplist->next = newlist;
return (tmplist);
}
}
return (NULL);
}
