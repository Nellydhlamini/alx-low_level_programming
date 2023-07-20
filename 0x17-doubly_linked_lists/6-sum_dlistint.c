#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the linked list
  * Return: The sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *x = head;
int sum = 0;

if (head)
{
while (x != NULL)
{
sum += x->n;
x = x->next;
}
}
return (sum);
}
