#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *x = NULL, *tmp = NULL;
unsigned int len = 0;

if (head && *head)
{
len = dlistint_len(*head);
if (index > len)
return (-1);

if (index == 0)
return (delete_first_dnode(head));

x = get_dnodeint_at_index(*head, index);
if (x)
{
tmp = x;
if (len - 1 == index)
x->prev->next = x->next;
else
{
x->prev->next = x->next;
x->next->prev = x->prev;
}

free(tmp);
return (1);
}
}

return (-1);
}

/**
  * delete_first_dnode - Remove the first node of a doubly linked list
  * @head: The head of the doubly linked list
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
dlistint_t *x = *head, *tmp = NULL;

tmp = x;
if (x->next)
{
x = x->next;
x->prev = tmp->prev;
*head = x;
}
else
{
*head = NULL;
}

free(tmp);
return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  * Return: The specific node of the doubly linked list
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

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
int length = 0;

while (h != NULL)
{
++length;
h = h->next;
}
return (length);
}
