#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t lis.
 * @h: linked list
 * Return: elements in the linked list
 */
size_t list_len(const list_t *h)
{
size_t counter = 0;

while (h)
{
h = h->next;
counter++;
}
return (counter);
}
