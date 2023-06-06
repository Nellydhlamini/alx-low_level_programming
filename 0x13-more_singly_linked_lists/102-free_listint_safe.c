#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 * Return:  size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
int difference;
size_t length = 0;
listint_t *tmpvalue;

if (!h || !*h)
return (0);

while (*h)
{
difference = *h - (*h)->next;
if (difference > 0)
{
tmpvalue = (*h)->next;
free(*h);
*h = tmpvalue;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}
*h = NULL;
return (length);
}
