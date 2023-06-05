#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the linked list
 * @idx: index of the list
 * @n: number
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode, *x;
unsigned int sum = 1;

if (head)
{
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

newnode->n = n;

if (idx > 0)
{
x = *head;
while (x)
{
if (sum == idx)
{
newnode->next = x->next;
x->next = newnode;
return (newnode);
}
x = x->next;
sum++;
}
if (idx > sum)
return (NULL);
}
else
{
newnode->next = *head;
*head = newnode;
}
return (newnode);
}
return (NULL);
}
