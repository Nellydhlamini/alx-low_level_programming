#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int sum = 0;

if (h != NULL)
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
sum++;
}
}
return (sum);
}
