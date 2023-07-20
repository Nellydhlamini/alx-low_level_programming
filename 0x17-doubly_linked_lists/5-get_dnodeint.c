#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a dlistint_t linked list.
  * @head: The head of the doubly linked list
  * @index: The index to find in the linked list
  * Return: The specific node of the linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *x = head;
unsigned int iter_times = 0;

if (head)
{
while (x != NULL)
{
if (iter_times == index)
return (x);

x = x->next;
++iter_times;
}
}
return (NULL);
}