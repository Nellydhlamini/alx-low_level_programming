#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head of a list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmpvalue;

if (head)
{
while (*head)
{
tmpvalue = (*head);
*head = (*head)->next;
free(tmpvalue);
}
}
else
{
return;
}
free(*head);
head = 0;
}
