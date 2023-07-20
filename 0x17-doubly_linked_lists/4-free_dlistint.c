#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Frees a doubly linked list
  * @head: The head of the linked list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
dlistint_t *x = head, *next = NULL;

while (x != NULL)
{
next = x->next;
free(x);
x = next;
}
}
