#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in a list
 * @head: head of the linked list
 * Return: sum of the data, if empty return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;

if (head)
{
while (head)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
