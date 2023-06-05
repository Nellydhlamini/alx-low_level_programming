#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of the linked list
 * @n: number added to node
 * Return: address of new element, if fails NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newlist;

if (head != NULL)
{
newlist = malloc(sizeof(listint_t));
if (newlist == NULL)
return (NULL);

newlist->n = n;
newlist->next = *head;
*head = newlist;

return (newlist);
}
return (NULL);
}
