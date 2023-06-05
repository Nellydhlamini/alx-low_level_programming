#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint -  deletes the head node of a linked list
 * @head: head of a linked list
 * Return:  the head node’s data.
 */
int pop_listint(listint_t **head)
{
listint_t *newhead;
int a = 0;

if (*head != NULL)
{
newhead = (*head)->next;
a = (*head)->n;
free(*head);
*head = newhead;
}
return (a);
}
