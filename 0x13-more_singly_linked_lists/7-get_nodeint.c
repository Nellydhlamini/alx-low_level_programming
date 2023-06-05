#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node
 * @head: head of the linked list
 * @index: index of the node
 * Return: the nth node, if it doesnt exist, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0;

if (head)
{
while (head)
{
if (counter == index)
return (head);

head = head->next;
counter++;
}
}
return (NULL);
}
