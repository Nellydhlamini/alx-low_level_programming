#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t listint_print_length(const listint_t *head);

/**
 * listint_print_length - counts number of different nodes
 * @head: pointer to head of the list
 * Return: number of different nodes, if list not looped, 0
 */
size_t listint_print_length(const listint_t *head)
{
size_t numnodes = 1;
const listint_t *x, *y;

if (head == NULL || head->next == NULL)
return (0);

x = head->next;
y = (head->next)->next;

while (y)
{
if (x == y)
{
x = head;
while (x != y)
{
numnodes++;
x = x->next;
y = y->next;
}
x = x->next;
while (x != y)
{
numnodes++;
x = x->next;
}
return (numnodes);
}
x = x->next;
y = (y->next)->next;
}
return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: ptr to the head of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t numnodes, ind = 0;

numnodes = listint_print_length(head);

if (numnodes == 0)
{
while (head != NULL)
{
numnodes++;
printf("[%p]%d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
while (ind < numnodes)
{
ind++;
printf("[%p]%d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p]%d\n", (void *)head, head->n);
}
return (numnodes);
}
