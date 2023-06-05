#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the linked list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
int counter = 0;

if (h != NULL)
{
while (h)
{
h = h->next;
counter++;
}
}
return (counter);
}
