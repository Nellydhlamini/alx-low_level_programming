#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free the doubly linked list
  * @head: The head of the doubly linked list
  * Return: Nothing
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
