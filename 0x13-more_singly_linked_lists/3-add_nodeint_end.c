#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of linked list
 * @n: number added at the end of list
 * Return: the address of the new element, if fails, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newlist, *tmpvalue;

if (head)
{
newlist = malloc(sizeof(listint_t));

if (newlist == NULL)
return (NULL);

newlist->n = n;
newlist->next = NULL;

if (*head == NULL)
{
*head = newlist;
return (*head);
}
else
{
tmpvalue = *head;
while (tmpvalue->next)
tmpvalue = tmpvalue->next;

tmpvalue->next = newlist;
return (tmpvalue);
}
}
return (NULL);
}
