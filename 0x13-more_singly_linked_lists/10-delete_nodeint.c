#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of the node
 * @index: index of the node
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int sum = 1;
listint_t *new = *head, *tmpvalue;

if (!head || !*head)
return (-1);

if (index == 0)
{
*head = new->next;
free(new);
return (1);
}
tmpvalue = *head;
while (tmpvalue)
{
if (sum == index)
{
new = tmpvalue->next;
tmpvalue->next = new->next;
free(new);
return (1);
}
tmpvalue = tmpvalue->next;
sum++;
}
return (-1);
}
