#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of a list
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *tmpvalue;

while (head)
{
tmpvalue = head;
head = head->next;
free(tmpvalue);
}
free(head);
}
